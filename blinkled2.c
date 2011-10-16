#include <msp430.h>
void delay(void);
main()
{P1DIR = 0x40;
 P1OUT = 0x40;
 int i = 1;
while(1){
 delay();
 P1OUT = 0x40;
 delay();
 P1OUT = 0;
 }
}

void delay(void)
{
long int i;
for(i = 0;i < 99999;i++)
{}
}

	
