#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
char seg[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x67};
char seg1[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x67};
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
for(int i=0;i<=9;i++)
{
for(int j=0;j<=9;j++)
{
RB1=1;
RB0=0;
PORTA=seg[i];
__delay_ms(500);
RB0=1;
RB1=0;
PORTA=seg1[j];
__delay_ms(500);
}
}
PORTA=0x00;
for(int i=9;i>=0;i--)
{
for(int j=9;j>=0;j--)
{
RB1=1;
RB0=0;
PORTA=seg[i];
__delay_ms(500);
RB0=1;
RB1=0;
PORTA=seg1[j];
__delay_ms(500);
}
}
}
}
