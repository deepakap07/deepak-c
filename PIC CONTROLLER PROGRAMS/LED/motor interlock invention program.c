#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x03;
PORTA=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(RA0==1&&RA2==0&&RA6==0)
{
RA5|=1;
}
if(RA2==0&&RA1==1&&RA5==0)
{
RA6|=1;
}
if(RA2==1)
{
RA5=0;
RA6=0;
}
}
}