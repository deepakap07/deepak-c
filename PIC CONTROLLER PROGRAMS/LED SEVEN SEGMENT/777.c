#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00
ANSEL=0x00;ANSELH=0x00;
while(1)
{
RB1=0;RB0=1;
PORTA=0x06;
__delay_ms(2000);
RB0=0,RB1=1;
PORTA=0x06;
__delay_ms(2000);
}
}