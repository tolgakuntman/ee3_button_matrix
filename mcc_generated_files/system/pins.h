/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB3 aliases
#define ROW5_TRIS                 TRISBbits.TRISB3
#define ROW5_LAT                  LATBbits.LATB3
#define ROW5_PORT                 PORTBbits.RB3
#define ROW5_WPU                  WPUBbits.WPUB3
#define ROW5_OD                   ODCONBbits.ODCB3
#define ROW5_ANS                  ANSELBbits.ANSELB3
#define ROW5_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define ROW5_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define ROW5_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define ROW5_GetValue()           PORTBbits.RB3
#define ROW5_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define ROW5_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define ROW5_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define ROW5_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define ROW5_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define ROW5_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define ROW5_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define ROW5_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RC1 aliases
#define nRF24_IRQ_TRIS                 TRISCbits.TRISC1
#define nRF24_IRQ_LAT                  LATCbits.LATC1
#define nRF24_IRQ_PORT                 PORTCbits.RC1
#define nRF24_IRQ_WPU                  WPUCbits.WPUC1
#define nRF24_IRQ_OD                   ODCONCbits.ODCC1
#define nRF24_IRQ_ANS                  ANSELCbits.ANSELC1
#define nRF24_IRQ_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define nRF24_IRQ_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define nRF24_IRQ_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define nRF24_IRQ_GetValue()           PORTCbits.RC1
#define nRF24_IRQ_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define nRF24_IRQ_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define nRF24_IRQ_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define nRF24_IRQ_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define nRF24_IRQ_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define nRF24_IRQ_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define nRF24_IRQ_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define nRF24_IRQ_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)
#define RC1_SetInterruptHandler  nRF24_IRQ_SetInterruptHandler

// get/set RC2 aliases
#define MISO_TRIS                 TRISCbits.TRISC2
#define MISO_LAT                  LATCbits.LATC2
#define MISO_PORT                 PORTCbits.RC2
#define MISO_WPU                  WPUCbits.WPUC2
#define MISO_OD                   ODCONCbits.ODCC2
#define MISO_ANS                  ANSELCbits.ANSELC2
#define MISO_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define MISO_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define MISO_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define MISO_GetValue()           PORTCbits.RC2
#define MISO_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define MISO_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define MISO_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define MISO_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define MISO_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define MISO_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define MISO_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define MISO_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 aliases
#define SCK_TRIS                 TRISCbits.TRISC3
#define SCK_LAT                  LATCbits.LATC3
#define SCK_PORT                 PORTCbits.RC3
#define SCK_WPU                  WPUCbits.WPUC3
#define SCK_OD                   ODCONCbits.ODCC3
#define SCK_ANS                  ANSELCbits.ANSELC3
#define SCK_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCK_GetValue()           PORTCbits.RC3
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCK_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCK_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCK_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCK_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCK_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define SCK_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 aliases
#define MOSI_TRIS                 TRISCbits.TRISC4
#define MOSI_LAT                  LATCbits.LATC4
#define MOSI_PORT                 PORTCbits.RC4
#define MOSI_WPU                  WPUCbits.WPUC4
#define MOSI_OD                   ODCONCbits.ODCC4
#define MOSI_ANS                  ANSELCbits.ANSELC4
#define MOSI_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define MOSI_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define MOSI_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define MOSI_GetValue()           PORTCbits.RC4
#define MOSI_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define MOSI_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define MOSI_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define MOSI_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define MOSI_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define MOSI_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define MOSI_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define MOSI_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define nRF24_CE_TRIS                 TRISCbits.TRISC5
#define nRF24_CE_LAT                  LATCbits.LATC5
#define nRF24_CE_PORT                 PORTCbits.RC5
#define nRF24_CE_WPU                  WPUCbits.WPUC5
#define nRF24_CE_OD                   ODCONCbits.ODCC5
#define nRF24_CE_ANS                  ANSELCbits.ANSELC5
#define nRF24_CE_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define nRF24_CE_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define nRF24_CE_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define nRF24_CE_GetValue()           PORTCbits.RC5
#define nRF24_CE_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define nRF24_CE_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define nRF24_CE_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define nRF24_CE_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define nRF24_CE_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define nRF24_CE_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define nRF24_CE_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define nRF24_CE_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define nRF24_CSN_TRIS                 TRISCbits.TRISC6
#define nRF24_CSN_LAT                  LATCbits.LATC6
#define nRF24_CSN_PORT                 PORTCbits.RC6
#define nRF24_CSN_WPU                  WPUCbits.WPUC6
#define nRF24_CSN_OD                   ODCONCbits.ODCC6
#define nRF24_CSN_ANS                  ANSELCbits.ANSELC6
#define nRF24_CSN_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define nRF24_CSN_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define nRF24_CSN_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define nRF24_CSN_GetValue()           PORTCbits.RC6
#define nRF24_CSN_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define nRF24_CSN_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define nRF24_CSN_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define nRF24_CSN_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define nRF24_CSN_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define nRF24_CSN_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define nRF24_CSN_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define nRF24_CSN_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 aliases
#define COL1_TRIS                 TRISCbits.TRISC7
#define COL1_LAT                  LATCbits.LATC7
#define COL1_PORT                 PORTCbits.RC7
#define COL1_WPU                  WPUCbits.WPUC7
#define COL1_OD                   ODCONCbits.ODCC7
#define COL1_ANS                  ANSELCbits.ANSELC7
#define COL1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define COL1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define COL1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define COL1_GetValue()           PORTCbits.RC7
#define COL1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define COL1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define COL1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define COL1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define COL1_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define COL1_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define COL1_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define COL1_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RD4 aliases
#define COL2_TRIS                 TRISDbits.TRISD4
#define COL2_LAT                  LATDbits.LATD4
#define COL2_PORT                 PORTDbits.RD4
#define COL2_WPU                  WPUDbits.WPUD4
#define COL2_OD                   ODCONDbits.ODCD4
#define COL2_ANS                  ANSELDbits.ANSELD4
#define COL2_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define COL2_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define COL2_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define COL2_GetValue()           PORTDbits.RD4
#define COL2_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define COL2_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define COL2_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define COL2_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define COL2_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define COL2_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define COL2_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define COL2_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set RD5 aliases
#define COL3_TRIS                 TRISDbits.TRISD5
#define COL3_LAT                  LATDbits.LATD5
#define COL3_PORT                 PORTDbits.RD5
#define COL3_WPU                  WPUDbits.WPUD5
#define COL3_OD                   ODCONDbits.ODCD5
#define COL3_ANS                  ANSELDbits.ANSELD5
#define COL3_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define COL3_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define COL3_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define COL3_GetValue()           PORTDbits.RD5
#define COL3_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define COL3_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define COL3_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define COL3_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define COL3_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define COL3_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define COL3_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define COL3_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set RD6 aliases
#define COL4_TRIS                 TRISDbits.TRISD6
#define COL4_LAT                  LATDbits.LATD6
#define COL4_PORT                 PORTDbits.RD6
#define COL4_WPU                  WPUDbits.WPUD6
#define COL4_OD                   ODCONDbits.ODCD6
#define COL4_ANS                  ANSELDbits.ANSELD6
#define COL4_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define COL4_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define COL4_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define COL4_GetValue()           PORTDbits.RD6
#define COL4_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define COL4_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define COL4_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define COL4_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define COL4_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define COL4_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define COL4_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define COL4_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set RD7 aliases
#define COL5_TRIS                 TRISDbits.TRISD7
#define COL5_LAT                  LATDbits.LATD7
#define COL5_PORT                 PORTDbits.RD7
#define COL5_WPU                  WPUDbits.WPUD7
#define COL5_OD                   ODCONDbits.ODCD7
#define COL5_ANS                  ANSELDbits.ANSELD7
#define COL5_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define COL5_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define COL5_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define COL5_GetValue()           PORTDbits.RD7
#define COL5_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define COL5_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define COL5_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define COL5_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define COL5_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define COL5_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define COL5_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define COL5_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set RF4 aliases
#define ROW4_TRIS                 TRISFbits.TRISF4
#define ROW4_LAT                  LATFbits.LATF4
#define ROW4_PORT                 PORTFbits.RF4
#define ROW4_WPU                  WPUFbits.WPUF4
#define ROW4_OD                   ODCONFbits.ODCF4
#define ROW4_ANS                  ANSELFbits.ANSELF4
#define ROW4_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define ROW4_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define ROW4_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define ROW4_GetValue()           PORTFbits.RF4
#define ROW4_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define ROW4_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define ROW4_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define ROW4_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define ROW4_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define ROW4_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define ROW4_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define ROW4_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set RF5 aliases
#define ROW3_TRIS                 TRISFbits.TRISF5
#define ROW3_LAT                  LATFbits.LATF5
#define ROW3_PORT                 PORTFbits.RF5
#define ROW3_WPU                  WPUFbits.WPUF5
#define ROW3_OD                   ODCONFbits.ODCF5
#define ROW3_ANS                  ANSELFbits.ANSELF5
#define ROW3_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define ROW3_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define ROW3_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define ROW3_GetValue()           PORTFbits.RF5
#define ROW3_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define ROW3_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define ROW3_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define ROW3_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define ROW3_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define ROW3_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define ROW3_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define ROW3_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)

// get/set RF6 aliases
#define ROW2_TRIS                 TRISFbits.TRISF6
#define ROW2_LAT                  LATFbits.LATF6
#define ROW2_PORT                 PORTFbits.RF6
#define ROW2_WPU                  WPUFbits.WPUF6
#define ROW2_OD                   ODCONFbits.ODCF6
#define ROW2_ANS                  ANSELFbits.ANSELF6
#define ROW2_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define ROW2_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define ROW2_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define ROW2_GetValue()           PORTFbits.RF6
#define ROW2_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define ROW2_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define ROW2_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define ROW2_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define ROW2_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define ROW2_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define ROW2_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define ROW2_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)

// get/set RF7 aliases
#define ROW1_TRIS                 TRISFbits.TRISF7
#define ROW1_LAT                  LATFbits.LATF7
#define ROW1_PORT                 PORTFbits.RF7
#define ROW1_WPU                  WPUFbits.WPUF7
#define ROW1_OD                   ODCONFbits.ODCF7
#define ROW1_ANS                  ANSELFbits.ANSELF7
#define ROW1_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define ROW1_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define ROW1_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define ROW1_GetValue()           PORTFbits.RF7
#define ROW1_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define ROW1_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define ROW1_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define ROW1_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define ROW1_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define ROW1_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define ROW1_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define ROW1_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the nRF24_IRQ pin functionality
 * @param none
 * @return none
 */
void nRF24_IRQ_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for nRF24_IRQ pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for nRF24_IRQ at application runtime
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void nRF24_IRQ_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for nRF24_IRQ pin.
 *        This is a dynamic interrupt handler to be used together with the nRF24_IRQ_SetInterruptHandler() method.
 *        This handler is called every time the nRF24_IRQ ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*nRF24_IRQ_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for nRF24_IRQ pin. 
 *        This is a predefined interrupt handler to be used together with the nRF24_IRQ_SetInterruptHandler() method.
 *        This handler is called every time the nRF24_IRQ ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void nRF24_IRQ_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/