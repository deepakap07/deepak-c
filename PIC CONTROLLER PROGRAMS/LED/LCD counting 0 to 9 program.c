#include<pic.h>
#define _XTAL_FREQ 400000
void pulse()
{
RB2=1;
__delay_ms(1000);
RB2=0;
__delay_ms(1000);
}
void type()
{
RB0=0;RB1=0;
PORTA=0x30;
pulse();
}
void on()
{
RB0=0;RB1=0;
PORTA=0x0E;
pulse();
}
void address()
{
RB0=0;RB1=0;
PORTA=0x80;
pulse();
}
void display(int a)
{
RB0=1;RB1=0;
PORTA=a;
pulse();
}
void main()
{
int i,count=0;
char dig[]={0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39};
TRISA=0x00;
PORTA=0x00;
TRISB=0x08;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
on();
type();
while(1)
{
if(RB3==1)
{
address();
display(dig[i]);
i=count++;
}
if(count>9)
{
count=0;
}
}
}