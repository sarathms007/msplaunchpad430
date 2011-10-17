/* pgm to alternatively switch on leds */
#include <msp430.h>
main()
{int i;
 P1DIR = 0x41;
 P1OUT = 1;
 while(1) {
 while(((P1IN>>3) & 1)) {
 }
 P1OUT ^= 0x41;
 for(i = 0;i<32000;i++)
 {}
 }
}
