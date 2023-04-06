#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x01;
PORTA=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(RA0==1||RA0==0)
RA7=1;
__delay_ms(50);
PORTA=0x00;
if(RA3==1||RA3==0)
RA7=0;
__delay_ms(50);
PORTA=0x00;
}
}