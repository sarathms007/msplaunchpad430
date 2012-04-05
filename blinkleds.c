#include <msp430.h>
void delay(void);
main()
{
 P1DIR = 0X41;
 P1OUT = 1;
 while(1){
 delay();
 P1OUT^= 0x41;
 }
}

void delay(void)
{
 long int i;
 for(i = 0;i < 99999;i++)
 {}
}
