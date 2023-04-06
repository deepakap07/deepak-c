#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
RA0=0;RA1=0;
PORTB=0x38;
RA2=1;
__delay_ms(2000);
RA2=0;
PORTB=0x0E;
RA2=1;
__delay_ms(2000);
RA2=0;
while(1)
{
RA0=0;RA1=0;
PORTB=0x80;
RA2=1;
__delay_ms(2000);
RA2=0;
RA0=1;RA1=0;
PORTB='M';
RA2=1;
__delay_ms(2000);
RA2=0;
RA0=1;RA1=0;
PORTB='A';
RA2=1;
__delay_ms(2000);
RA2=0;

}
}