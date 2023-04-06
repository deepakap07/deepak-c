#include<pic.h>
#define _XTAL_FREQ 400000
void pulse()
{
RB2=1;
__delay_ms(50);
RB2=0;
}
void type()
{
RB0=0;RB1=0;
PORTA=0x38;
pulse();
}
void on()
{
PORTA=0x0E;
pulse();
}
void address()
{
RB0=0;RB1=0;
PORTA=(0x80);
pulse();
PORTA=0x1C;
pulse();
}
void address1()
{
RB0=0;RB1=0;
PORTA=(0xcf);
pulse();
PORTA=0x1C;
pulse();
}
void fun(char *name);
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
type();
on();
while(1)
{
address();
fun("COIMBATORE");
address1();
fun("TIRUPPUR");
}
}
void fun( char *name)
{
RB0=1;RB1=0;
for(int i=0;name[i]!='\0';i++)
{
PORTA=name[i];
pulse();
}
}

