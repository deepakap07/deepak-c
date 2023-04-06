#include<pic.h>
#define _XTAL_FREQ 400000
//#define RA a[i]
void main()
{
int count=0,flag=0;
TRISA=0xff;
PORTA=0x00;
TRISB=0x01;
PORTB=0x00;
TRISC=0x00;
PORTC=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(((RA0==1)||(RA1==1)||(RA2==1)||(RA3==1)||(RA4==1)||(RA5==1)||(RA6==1)||(RA7==1))&&(RB0==0)&&(flag==0))
{
flag=1;
}
if(flag==1)
{
count++;
flag++;
}
if((RA0==0)&&(RA1==0)&&(RA2==0)&&(RA3==0)&&(RA4==0)&&(RA5==0)&&(RA6==0)&&(RA7==0))
{
flag=0;
}
for(int i=0;i<count;i++)
{
PORTC|=1<<(count-1);
}
if(RB0==1)
{
PORTC=0x00;
}
}
}

