#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "mirf.h"
#include "button_check.h"
#include <stdbool.h>

#define CONFIG_RECEIVER 0
#define CONFIG_SENDER 0
#define CONFIG_RADIO_CHANNEL 112
#define CONFIG_ADVANCED 1
#define CONFIG_RF_RATIO_1M 1
#define CONFIG_RETRANSMIT_DELAY 100
#define CONFIG_SLAVE 1

static bool data_send_lock = false;
static bool nrf_flag = false;

#if CONFIG_ADVANCED
void AdvancedSettings(NRF24_t *dev) {
#if CONFIG_RF_RATIO_2M
    Nrf24_SetSpeedDataRates(dev, 1);
#endif
#if CONFIG_RF_RATIO_1M
    Nrf24_SetSpeedDataRates(dev, 0);
#endif
#if CONFIG_RF_RATIO_250K
    Nrf24_SetSpeedDataRates(dev, 2);
#endif
    Nrf24_setRetransmitDelay(dev, CONFIG_RETRANSMIT_DELAY);
}
#endif // CONFIG_ADVANCED

#if CONFIG_SLAVE
void slave(void *pvParameters) {
    NRF24_t dev;
    Nrf24_init(&dev);
    uint8_t payload = 32;
    uint8_t channel = CONFIG_RADIO_CHANNEL;
    Nrf24_config(&dev, channel, payload);

    // Set RX/TX addresses
    while (Nrf24_setRADDR(&dev, (uint8_t *)"2RECV") != NRF_OK);
    while (Nrf24_setTADDR(&dev, (uint8_t *)"2RECV") != NRF_OK);

#if CONFIG_ADVANCED
    AdvancedSettings(&dev);
#endif

    Nrf24_configRegister(NRF_STATUS, (1 << RX_DR) | (1 << TX_DS) | (1 << MAX_RT));
    data_send_lock = true;
    while (1) {
        // Button check logic
        if (IsButonChecked()) {
            if(!data_send_lock){
                Nrf24_configRegister(NRF_STATUS, (1 << TX_DS) | (1 << MAX_RT));
                ClearButtonPress();
                TMR2_Start();
                continue;
            }
            uint8_t row = getRow();
            uint8_t col = getCol();

            if (row != 255 && col != 255) {
                uint8_t sending_buf[32] = {0};

                // Set first 8 bytes to "BUTTON"
                strncpy((char *)sending_buf, "BUTTON", 8);

                // Set row and col just after "BUTTON"
                sending_buf[8] = row;
                sending_buf[9] = col;

                Nrf24_send(&dev, sending_buf);

                while (Nrf24_isSending(&dev)) {
                    DELAY_milliseconds(1);
                }
            }
            data_send_lock=false;
            TMR0_Start();
            ClearButtonPress();
            TMR2_Start();
        }



        if(nrf_flag){
            if (Nrf24_dataReady(&dev)) {
                uint8_t buf[32]={0};
                Nrf24_getData(&dev, buf);
            
            }
        }

        DELAY_milliseconds(1);  // Avoid watchdog
    }
}
#endif // CONFIG_SLAVE


// Interrupt callbacks
void nrf_irq(void) {
    nrf_flag = true;
}

void tmr0_irq(void) {
    data_send_lock = true;
    TMR0_Stop();
}

// Entry point
void main(void) {
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();

    // Register ISRs
    TMR0_OverflowCallbackRegister(tmr0_irq);
    TMR2_OverflowCallbackRegister(Buttoncheck);
    nRF24_IRQ_SetInterruptHandler(nrf_irq);

    // Start timers
    TMR1_Stop();
    TMR2_Start();  // Button matrix FSM
    TMR0_Stop();  // Triggers PING flag

#if CONFIG_SLAVE
    slave(NULL);
#endif

#if CONFIG_RECEIVER
    receiver(NULL);
#endif

#if CONFIG_SENDER
    sender(NULL);
#endif
}
