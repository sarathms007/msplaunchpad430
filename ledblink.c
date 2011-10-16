#include <msp430.h>
void delay(void);
main()
{
long int i;

P1DIR=1;
while(i)
{
	P1OUT^=1;
	delay();
	P1OUT^=1;
	delay();
}}

void delay()
{long int i;
for(i=0;i<99999;i++)
{}
}
