#include<msp430.h>

main()
{
P1DIR=1;
TACTL=0x220;
P1OUT=1;
while(1) {
while(!(TACTL&1))
{}
TACTL^=1;
P1OUT^=1;
}
}

