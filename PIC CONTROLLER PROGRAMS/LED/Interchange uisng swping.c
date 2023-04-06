#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
int flag=0;
TRISA=0x07;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(flag==0)
{
if(RA0==1)
{
RB0=1;
}
if(RA1==1)
{
RB0=0;
}
}
}
}