#include<pic.h>
#define _XTAL_FREQ 400000
void pulse()
{
RB2=1;
__delay_ms(50);
RB2=0;
__delay_ms(50);
}
void LCD(int a,int b)
{
RB0=b;RB1=0;
PORTA=(a&0xf0)<<4;
pulse();
//PORTA=(a>>4&0x0f);
//pulse();
PORTA=(a&0x0f);
pulse();
}
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
LCD(0x02,0);
LCD(0x28,0);
LCD(0x0E,0);
while(1)
{
LCD(0x80,0);
LCD(0x41,1);

}
}