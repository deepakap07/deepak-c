#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED RA0
void interrupt git()
{
if(INTF==1)
{
RA0=0;
RC2=1;
__delay_ms(5000);
RC2=0;
INTF=0;
}
}
void main()
{
int count=0;
TRISA=0x00;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISB=0x01;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
INTCON=0xd0;
while(1)
{
RA0=1;
}
}
