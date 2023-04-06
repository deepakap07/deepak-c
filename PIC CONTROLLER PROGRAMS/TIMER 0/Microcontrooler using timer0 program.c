#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED RA0
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
count++;
T0IF=0;
}
if(count>=0&&count<=125)
{
LED=1;
}
if(count>125&&count<=250)
{
LED=0;
}
if(count>250)
{
count=0;
}
}
}
