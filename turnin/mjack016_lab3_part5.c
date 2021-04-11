/*	Author: mjack016
 *  Partner(s) Name: Marod
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
          DDRA = 0x000; PORTA = 0xFFF;
          DDRB = 0xFE; PORTB = 0x00;
          //DDRC = 0xF0; PORTC = 0x00;
	  DDRD = 0x00; PORTD = 0xFF;
 /* Insert your solution below */
        unsigned short tmpA; 
        unsigned char tmpB;
	unsigned char tmpD;
    while (1) {
	tmpB = PINB & 0x01;
	tmpD = PIND;
	tmpA = tmpD << 1;
	tmpA = tmpA + tmpB;
	
	
	if(tmpA >= 70){	
		tmpB = 0x02;
	}
	else if((tmpA > 5) && (tmpA < 70)){
		tmpB = 0x04;
	}
	else if(tmpA <= 5){
		tmpB = 0;
	}
	PORTB = tmpB;
	  
    }
    return 1;

}
