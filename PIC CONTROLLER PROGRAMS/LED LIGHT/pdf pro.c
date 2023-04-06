#include<pic.h>
#define _XTAL_FREQ 400000
void delay(unsigned int t)
{ while(t--);
}
void main()
{
PORTC=0x00; TRISC=0x00;
ANSEL=0x00; ANSELH=0x00;
while(1)
{
PORTC=0x55;
delay_ms(2000);
PORTC=0xAA;
delay_ms(2000);
} }