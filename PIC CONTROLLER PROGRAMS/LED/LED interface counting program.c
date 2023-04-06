#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
int count=0;
char a[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7e,0x6f};
TRISA=0x01;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(RA0==1)
{
__delay_ms(2000);
count++;
for(int i=0;i<count;i++)
{
PORTC=a[i];
__delay_ms(2000);
}
if(count==10)
{
PORTC=0x00;
__delay_ms(2000);
}
}
}
}
