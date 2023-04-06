#include<pic.h>
#define _XTAL_FREQ 4000000
int x=0;
void pulse()
{
RC7=1;
__delay_us(50);
RC7=0;
__delay_us(50);
}
void display(int a,int b)
{
RC5=b;RC6=0;
PORTD=a;
pulse();
}

void main()
{
TRISA=0x10;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
display(0x38,0);
display(0x0E,0);
OPTION_REG=0x21;
TMR0=0;
while(1)
{
if(RA4==1)
{
x++;
display(0x80,0);
display((0x30+(x/100)),1);
display(0x81,0);
display((0x30+((x%100)/10)),1);
display(0x82,0);
display((0x30+(x%10)),1);
while(RA4=1);
}
display(0xc0,0);
display((0x30+(TMR0/100)),1);
display(0xc1,0);
display((0x30+((TMR0%100)/10)),1);
display(0xc2,0);
display((0x30+(TMR0%10)),1);
}
}

