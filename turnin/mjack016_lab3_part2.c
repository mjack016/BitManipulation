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
          DDRA = 0x00; PORTA = 0xFF;
         // DDRB = 0x00; PORTB = 0xFF;
          DDRC = 0xFF; PORTC = 0x00;
 /* Insert your solution below */
        unsigned char tmpA; //0111 1111
        unsigned char tmpC;
    while (1) {
	tmpA = PINA; //0x83 -> 1000 0011 ->
	tmpA = tmpA & 0x0F;
	tmpC = 0x00;
        if (tmpA == 0x01 || tmpA == 0x02){
		tmpC = 0x20; //0010 0000
	}
	else if (tmpA == 0x03 || tmpA == 0x04){
		tmpC = 0x30; // 0111
	} 
	else if (tmpA == 0x05 || tmpA == 0x06){
		tmpC = 0x38;
	}
	else if (tmpA == 0x07 || tmpA == 0x08 || tmpA == 0x09){
		tmpC = 0x3C;
	}
	else if (tmpA == 0x0A || tmpA == 0x0B || tmpA == 0x0C){
		tmpC = 0x3E;
	}
	else if (tmpA == 0x0D || tmpA == 0x0E || tmpA == 0x0F){
		tmpC = 0x3F;
	}
	if(tmpA <= 0x04){
		tmpC = tmpC | 0x40;
	}
	tmpA = (PINA & 0X70); // 0011 0000
	if(tmpA == 0x30){
		tmpC = tmpC | 0x80;
	}
        PORTC = tmpC;
    }
    return 1;

}
