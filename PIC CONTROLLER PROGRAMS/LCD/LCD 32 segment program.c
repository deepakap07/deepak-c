#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
char a[]="MANFREE TECHNOLOGIES MANFREE TECHNOLOGIES";
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
RB0=0;RB1=0;
PORTA=0x30;
PORTA=0x38;
RB2=1;
__delay_ms(2000);
RB2=0;
PORTA=0x0E;
RB2=1;
__delay_ms(2000);
RB2=0;
while(1)
{
RB0=0;RB1=0;
PORTA=0x80;
RB2=1;
__delay_ms(2000);
RB2=0;
RB0=1;RB1=0;
for(int i=0;i<=41;i++)
{
PORTA=a[i];

RB2=1;
__delay_ms(2000);
RB2=0;
}
RB0=0;RB1=0;
PORTA=0x1c;
RB2=1;
__delay_ms(2000);
RB2=0;
}
}