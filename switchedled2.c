/* pgm to turn off red led while the switch is being pressed */
#include <msp430.h>
main()
{P1DIR = 1;
 while(1) {
 P1OUT = 1;
 while(!((P1IN>>3) & 1)) {
 P1OUT = 0;
 }
}}
