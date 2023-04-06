#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
while(1)
{
for(int i=3,j=4;i>=0,j<8;i--,j++)
{
PORTA|=1<<i;
PORTA|=1<<j;
__delay_ms(500);
PORTB|=1<<i;
PORTB|=1<<j;
__delay_ms(500);
PORTC|=1<<i;
PORTC|=1<<j;
__delay_ms(500);
PORTD|=1<<i;
PORTD|=1<<j;
__delay_ms(500);
}
for(int i=0,j=7;i>=3,j>=4;i++,j--)
{
PORTA&=~(1<<i);
PORTA&=~(1<<j);
__delay_ms(500);
PORTB&=~(1<<i);
PORTB&=~(1<<j);
__delay_ms(500);
PORTC&=~(1<<i);
PORTC&=~(1<<j);
__delay_ms(500);
PORTD&=~(1<<i);
PORTD&=~(1<<j);
__delay_ms(500);
}

}
}