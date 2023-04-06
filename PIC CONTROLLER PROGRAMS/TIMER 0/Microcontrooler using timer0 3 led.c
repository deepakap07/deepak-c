#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED1 RA0
#define LED2 RA1
#define LED3 RA2
void main()
{
int count=0;
TRISA=0x00;
PORTA=0x00;
ANSEL=0x00;ANSELH=0x00;
OPTION_REG=0x95;
TMR0=131;
while(1)
{
if(T0IF==1)
{
LED1=1;
LED2=1;
LED3=1;
count++;
T0IF=0;
}
if(count>=0&&count>=125)
{
LED1=0;
}
if(count>125&&count>=250)
{
LED2=0;
}
if(count>250&&count>=375)
{
LED3=0;
}
if(count>375)
{
count=0;
}
}
}
