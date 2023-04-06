#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
char seg[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
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
RB1=0;
RB0=1;
PORTA=seg[i];
__delay_ms(500);
RB0=0;
RB1=1;
PORTA=seg1[j];
__delay_ms(500);
}
}
PORTA=0x00;
for(int i=9;i>=0;i--)
{
for(int j=9;j>=0;j--)
{
RB1=0;
RB0=1;
PORTA=seg[i];
__delay_ms(500);
RB0=0;
RB1=1;
PORTA=seg1[j];
__delay_ms(500);

}
}
}
}