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
          DDRB = 0x0F; PORTB = 0x00;
          DDRC = 0xF0; PORTC = 0x00;
 /* Insert your solution below */
        unsigned char tmpA; //0111 1111
        unsigned char tmpB;
	unsigned char tmpC;
    while (1) {
	tmpA = PINA >> 4;
	tmpB = tmpA;
	
	tmpA = PINA & 0xF0;
	tmpC = tmpA;

	PORTB = tmpB;
	PORTC = tmpC;
    }
    return 1;

}
