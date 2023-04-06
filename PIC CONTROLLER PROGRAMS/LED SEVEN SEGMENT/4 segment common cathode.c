#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
char seg[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x67};
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
for(int k=0;k<=9;k++)
{
for(int l=0;l<=9;l++)
{
RB1=1;RB2=1;RB3=1;RB0=0;
PORTA=seg[i];
__delay_ms(100);
RB0=1;RB2=1;RB3=1;RB1=0;
PORTA=seg[j];
__delay_ms(100);
RB1=1;RB0=1;RB3=1;RB2=0;
PORTA=seg[k];
__delay_ms(100);
RB2=1;RB0=1;RB1=1;RB3=0;
PORTA=seg[l];
__delay_ms(100);
}
}
}
}
}
}