/* 
 * File:   button_check.h
 * Author: tolgakuntman
 *
 * Created on March 10, 2025, 12:11 AM
 */

#ifndef BUTTON_CHECK_H
#define	BUTTON_CHECK_H

#ifdef	__cplusplus
extern "C" {
#endif
#define ROW_0 LATFbits.LATF7
#define ROW_1 LATFbits.LATF6
#define ROW_2 LATFbits.LATF5
#define ROW_3 LATFbits.LATF4
#define ROW_4 LATBbits.LATB3

// Define column pin macros for easier access
#define COL_0 PORTCbits.RC7
#define COL_1 PORTDbits.RD4
#define COL_2 PORTDbits.RD5
#define COL_3 PORTDbits.RD6
#define COL_4 PORTDbits.RD7

#define NUM_ROWS 5
#define NUM_COLS 5

void SetRowLow(uint8_t row);
void SetAllRowsHigh(void);
uint8_t IsColumnPressed(uint8_t col);
void Buttoncheck(void);
void ButtonResample(void);
uint8_t IsButonChecked(void);
void ClearButtonPress();
uint8_t getRow();
uint8_t getCol();
#ifdef	__cplusplus
}
#endif

#endif	/* BUTTON_CHECK_H */

