#include<msp430.h>
#include<stdint.h>
main()
{
P1DIR = 0x41;
P1OUT = 1;
int16_t lfsr = 0xACE1u;
int bit,i;
do{
bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
lfsr =  (lfsr >> 1) | (bit << 15);
for(i = 0; i < 23000; i ++);
P1OUT ^=(lfsr & 0x41);
}
while(lfsr != 0xACE1u);
}
