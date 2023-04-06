#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED1 RA0
#define LED2 RA1
#define LED3 RA2
#define LED4 RA3
#define LED5 RA4
#define LED6 RA5
void pulse()
{
RC7=1;
__delay_ms(10);
RC7=0;
__delay_ms(10);
}
void type(int a,int b)
{
RC5=b;RC6=0;
PORTD=a;
pulse();
}
void main()
{
int count=0;
TRISA=0x00;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
type(0x38,0);
type(0x0E,0);
OPTION_REG=0x95;
TMR0=131;
int x,y,z;
while(1)
{
if(T0IF==1)
{
count++;
x=count/100;
y=(count%100)/10;
z=count%10;
type(0x80,0);
type(0x30+x,1);
type(0x81,0);
type(0x30+y,1);
type(0x82,0);
type(0x30+z,1);
T0IF=0;
}
if(count>=0&&count<=25)
{
LED3=1;LED4=1;
}
if(count>25&&count<=50)
{
LED3=1;LED4=1;
LED2=1;
}
if(count>50&&count<=75)
{
LED3=0;LED4=0;
LED2=0;LED1=1;LED6=1;
}
if(count>75&&count<=100)
{
LED3=0;LED4=0;
LED2=0;LED1=1;LED6=1;
LED5=1;
}
if(count>100)
{
LED1=0;LED6=0;
LED5=0;
count=0;
}
}
}
