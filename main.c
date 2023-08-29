/*******************************************************************************
*********************** Blinking with Microchip dsPIC33F ***********************
*******************************************************************************/

#include <xc.h>                 // mcu registers
#include <libpic30.h>           // __delay32 function
#include <stdbool.h>            // true/false

const unsigned long cyclesInOneSecond = 10000000;

int main(void) {
    
    //Configure pin3 (RE5) to digital output
    _TRISE5 = 0; 
    
    while(true)
    {
        //Swith PORTEbits.RE5 register
        _RE5 = 1 - _RE5;
        __delay32(cyclesInOneSecond);        
    }
    
    return 0;
}
