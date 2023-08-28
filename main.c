/*******************************************************************************
******************** ?????? ?????????? ?????? ??? delay_ms *********************
*******************************************************************************/

#include <xc.h>                 // mcu registers
#include <libpic30.h>           // delay
#include <stdbool.h>            // true/false

//#define FOSC 40000000ULL 
//#define FCY     FOSC/2
const unsigned long cyclesInOneSecond = 10000000;

int main(void) {
    
    TRISEbits.TRISE5 = 0; // Pin3
    //TRISEbits.TRISE6 = 0; // Pin4
    //TRISEbits.TRISE7 = 0; // Pin5
    
    while(true)
    {
        PORTEbits.RE5 = 1;
        //PORTEbits.RE6 = 1;
        //PORTEbits.RE7 = 1;
        //__delay_ms(2000);
        __delay32(cyclesInOneSecond);        
        PORTEbits.RE5 = 0;
        //PORTEbits.RE6 = 0;
        //PORTEbits.RE7 = 0;
        __delay32(cyclesInOneSecond);
        //__delay_ms(2000);
    }

//    while(true)
//    {
//    _LATE6 = 1 - _LATE6;
//    __delay32(cyclesInOneSecond);
//     //__delay_ms(2000);
//    }

    
    return 0;
}

/*******************************************************************************
******************** Agsense Valley Field Commander Relays *********************
*******************************************************************************/
//private byte[] relayPins = { 4, 5, 6, 7, 8, 9, 60, 58, 59, 34, 3 };
//Stop - Relay 1 (pin 4), Start - Relay 2 (pin 5), WaterOff, MothionOff
//    
//private byte analogSensorPin = 24;