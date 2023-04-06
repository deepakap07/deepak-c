#include<pic.h>
#define _XTAL_FREQ 4000000
int count=0,count1=0;
void pulse()
{
RC7=1;
__delay_ms(10);
RC7=0;
__delay_ms(10);
}
void display(int a,int b)
{
RC5=b;RC6=0;
PORTD=a;
pulse();
}
void main()
{
int x,y,z;
TRISA=0x03;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
display(0x38,0);
display(0x0E,0);
OPTION_REG=0x95;
TMR0=131;
while(1)
{
if(T0IF==1)
{
count++;
T0IF=0;
TMR0=131;
}
if(RA0==1)
{
count1++;
x=count1/100;
y=(count1%100)/10;
z=count1%10;
display(0x80,0);
display(0x30+x,1);
display(0x81,0);
display(0x30+y,1);
display(0x82,0);
display(0x30+z,1);
}
if(RA1==1)
{
for(int i=0;i<count1;i++)
{
RA3=1;
__delay_ms(200);
RA3=0;
__delay_ms(200);
}
}
}
}