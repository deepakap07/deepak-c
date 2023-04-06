#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x00;
PORTA=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
for(int i=0;i<8;i++)
{
if(i%2!=0)
PORTA|=1<<i;
__delay_ms(2000);
}
for(int i=7;i>=0;i--)
{
if(i%2==0)
PORTA|=1<<i;
__delay_ms(2000);
}
PORTA=0x00;
}
}