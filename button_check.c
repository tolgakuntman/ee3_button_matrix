#include <xc.h>
#include "button_check.h"
#include <stdbool.h>
#include "mcc_generated_files/system/system.h"

#define PRESS_STABLE_THRESHOLD 3  // Number of consecutive matches to confirm press
#define NUM_ROWS 5
#define NUM_COLS 5

// Output state
static uint8_t button_pressed = 0;
static uint8_t pressedRow = 255;
static uint8_t pressedColumn = 255;

// FSM internals
static uint8_t currentRow = 0;
static uint8_t settleCounter = 0;
static uint8_t debounceCounter = 0;
static bool button_already_sent = false;

typedef enum {
    FSM_IDLE = 0,
    FSM_ROW_SET,
    FSM_SCAN_COLS,
    FSM_DEBOUNCE
} ButtonFSMState;

static ButtonFSMState fsm_state = FSM_IDLE;

// Helper functions
void SetRowActive(uint8_t row) {
    ROW_0 = 1; ROW_1 = 1; ROW_2 = 1; ROW_3 = 1; ROW_4 = 1;
    switch (row) {
        case 0: ROW_0 = 0; break;
        case 1: ROW_1 = 0; break;
        case 2: ROW_2 = 0; break;
        case 3: ROW_3 = 0; break;
        case 4: ROW_4 = 0; break;
    }
}

uint8_t IsColumnPressed(uint8_t col) {
    switch (col) {
        case 0: return !COL_0;
        case 1: return !COL_1;
        case 2: return !COL_2;
        case 3: return !COL_3;
        case 4: return !COL_4;
        default: return 0;
    }
}

// FSM-based scanning
void Buttoncheck(void) {
    switch (fsm_state) {
        case FSM_IDLE:
            SetRowActive(currentRow);
            settleCounter = 0;
            fsm_state = FSM_ROW_SET;
            break;

        case FSM_ROW_SET:
            // Wait 2 ticks (~2ms) for signal to settle
            if (++settleCounter >= 2) {
                fsm_state = FSM_SCAN_COLS;
            }
            break;

        case FSM_SCAN_COLS:
            for (uint8_t col = 0; col < NUM_COLS; col++) {
                if (IsColumnPressed(col)) {
                    pressedRow = currentRow;
                    pressedColumn = col;
                    debounceCounter = 0;
                    fsm_state = FSM_DEBOUNCE;
                    return;
                }
            }
            // Move to next row
            currentRow = (currentRow + 1) % NUM_ROWS;
            fsm_state = FSM_IDLE;
            break;

        case FSM_DEBOUNCE:
            if (IsColumnPressed(pressedColumn)) {
                if (!button_already_sent && ++debounceCounter >= PRESS_STABLE_THRESHOLD) {
                    button_pressed = 1;
                    button_already_sent = true;
                    fsm_state = FSM_IDLE;
                    TMR2_Stop();
                }
            } else {
                // Button was released or bounce failed
                pressedRow = 255;
                pressedColumn = 255;
                debounceCounter = 0;
                button_already_sent = false;
                fsm_state = FSM_IDLE;
            }
            break;
    }
}

// Output interface
uint8_t IsButonChecked(void) {
    return button_pressed;
}

void ClearButtonPress(void) {
    button_pressed = 0;
    pressedRow = 255;
    pressedColumn = 255;
}

uint8_t getRow(void) {
    return pressedRow;
}

uint8_t getCol(void) {
    return pressedColumn;
}
