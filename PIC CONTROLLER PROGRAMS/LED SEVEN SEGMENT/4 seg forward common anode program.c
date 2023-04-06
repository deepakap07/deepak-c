#include<pic.h>
# define _XTAL_FREQ 400000
void main()
{
int i,j,k,l,breakloop=0;
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
TRISA=0x03;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
if(RA7==1)
{
PORTC=0x00;
__delay_ms(500);
}
if(RA0==1)
{
for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
RA5=0;RA4=0;RA3=0;RA2=1;
PORTC=seg1[i];
__delay_ms(500);
RA2=0;RA5=0;RA4=0;RA3=1;
PORTC=seg1[j];
__delay_ms(500);
if(RA1==1)
{
for(k=0;k<=9;k++)
{
for(l=0;l<=9;l++)
{
RA5=0;RA3=0;RA2=0;RA4=1;
PORTC=seg1[k];
__delay_ms(500);
RA4=0;RA3=0;RA2=0;RA5=1;
PORTC=seg1[l];
__delay_ms(500);
}
}
}
}
}
}
}
}

