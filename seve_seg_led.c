#include<msp430.h>
void delay();
main()
{
P1DIR=0xff;
P1OUT=0x3f;
delay();
P1OUT=0x06;
delay();
P1OUT=0x5b;
delay();
P1OUT=0x4f;
delay();
P1OUT=0x66;
delay();
P1OUT=0x6d;
delay();
P1OUT=0x7d;
delay();
P1OUT=0x07;
delay();
P1OUT=0x7f;
delay();
P1OUT=0x6f;
delay;
}

void delay()
{
long int i=0;
while(i<320000)
{i++;}
}
