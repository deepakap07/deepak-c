#include<pic.h>
#define _XTAL_FREQ 400000
void pulse()
{
RB2=1;
__delay_ms(1000);
RB2=0;
__delay_ms(1000);
}
void LCD(int a,int b)
{
RB0=b;RB1=0;
PORTA=a;
pulse();
}
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
TRISC=0x78;
PORTC=0x00;
ANSEL=0x00;ANSELH=0x00;
LCD(0x38,0);
LCD(0x0E,0);
LCD(0x80,0);
while(1)
{
RC1=0;RC2=0;RC0=1;
if(RC3==1)
{
LCD(0x31,1);
}
if(RC4==1)
{
LCD(0x34,1);
}
if(RC5==1)
{
LCD(0x37,1);
}
if(RC6==1)
{
LCD(0x2a,1);
}
RC0=0;RC2=0;RC1=1;
if(RC3==1)
{
LCD(0x32,1);
}
if(RC4==1)
{
LCD(0x35,1);
}
if(RC5==1)
{
LCD(0x38,1);
}
if(RC6==1)
{
LCD(0x30,1);
}
RC1=0;RC0=0;RC2=1;
if(RC3==1)
{
LCD(0x33,1);
}
if(RC4==1)
{
LCD(0x36,1);
}
if(RC5==1)
{
LCD(0x39,1);
}
if(RC6==1)
{
LCD(0x23,1);
}
}
}