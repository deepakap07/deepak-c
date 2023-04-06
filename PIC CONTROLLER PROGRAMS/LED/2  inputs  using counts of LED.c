#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x09;
PORTA=0x00;
ANSEL=0x00;ANSELH=0x00;
int count=0, flag=0;
while(1)
{
if(RA0==1&&flag==0)
{
flag=1;
}
if(flag==1)
{
count++;
flag++;
}
if(RA0==0)
{
flag=0;
}
if(RA3==1)
{
for(int i=0;i<count;i++)
{
RA7=1;
__delay_ms(5000);
RA7=0;
__delay_ms(5000);
}
count=0;
}
}
}



