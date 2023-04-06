#include<pic.h>
# define _XTAL_FREQ 400000
void main()
{
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
TRISA=0x00;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(RA0==1)
{
for(int i=0;i<=9;i++)
{
for(int j=0;j<=9;j++)
{
RA2=0;RA1=1;
PORTC=seg1[i];
__delay_ms(500);
RA1=0;RA2=1;
PORTC=seg1[j];
__delay_ms(500);
}
}
}
}}	