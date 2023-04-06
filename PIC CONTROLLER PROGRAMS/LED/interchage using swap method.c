#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
int a=1,b=0,temp;
int flag=0;
TRISA=0x07;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(flag==0)
{
if(RA0==1)
{
RB0=a;
}
if(RA1==1)
{
RB0=b;
}
}
if(RA2==1)
{
int temp=a;
a=b;
b=temp;
}
flag=0;
}
}


