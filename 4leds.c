#include<msp430.h>
//pgm to ligh 4 leds one by one 
main()
{int i;
P1DIR = 0xF;
P1OUT = 1;
while(1){
        for(i = 0; i < 32000; i++);
        P1OUT = (P1OUT<<1 == 0x10 ? 1 : P1OUT<<1 );
        }
}

/*upto 8 leds can be done by changing the value "0x10" in the pgm to "0x41 */

