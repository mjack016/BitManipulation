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
    /* Insert DDR and PORT initializations /
 *         DDRA = 0x00; PORTA = 0xFF;
 *                 DDRB = 0x00; PORTB = 0xFF;
 *                         DDRC = 0xFF; PORTC = 0x00;
 *                             / Insert your solution below */
        unsigned char cnt = 0x00;
        unsigned char curr1 = 0x00;
        unsigned char curr2 = 0x00;
        unsigned char i;
        unsigned char tmpA = PINA;
        unsigned char tmpB = PINB;
    while (1) {
        for(i = 0; i < 8; ++i){
                curr1 = (tmpA >> i) & 0x01;
                curr2 = (tmpB >> i) & 0x01;
                cnt = cnt + curr1 + curr2;
        }
        PORTC = cnt;
    }
    return 1;

}
