#include<pic.h>
#define _XTAL_FREQ 4000000
#define BUTTON1 RA0
#define BUTTON2 RA1
#define LED RA2
void pulse()
{
RD2=1;
__delay_ms(1000);
RD2=0;
__delay_ms(1000);
}
void display(int a,int b)
{
RD0=b;RD1=0;
PORTC=a;
pulse();
}
void main()
{
int count=0;
TRISA=0x03;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
OPTION_REG=0x95;
TMR0=131;
display(0x02,0);
display(0x28,0);
display(0x0e,0);
int c,d,e;
while(1)
{
if(T0IF==1)
{
count++;
c=count/100;
d=((count%100)/10);
e=((count%100)%10);
display(0x80,0);
display(0x30+c,1);
display(0x81,0);
display(0x30+d,1);
display(0x82,0);
display(0x30+e,1);
T0IF=0;
}
if(count<=125)
{
LED=1;
}
if(count>125)
{
LED=0;
}
if(count<=205)
{
count=0;
}
}
}