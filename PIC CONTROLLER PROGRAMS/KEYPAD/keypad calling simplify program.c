#include<pic.h>
#define _XTAL_FREQ 400000
void pulse()
{
RB2=1;
__delay_ms(1000);
RB2=0;
__delay_ms(1000);
}
void LCD(int a,int b)
{
RB0=b;RB1=0;
PORTA=a;
pulse();
}
void input()
{
RC2=0;RC1=0;RC0=1;
}
void input1()
{
RC0=0;RC2=0;RC1=1;
}
void input2()
{
RC1=0;RC0=0;RC2=1;
}
void dec(int m,int n,int o,int p)
{
if(RC3==1)
LCD(m,1);
if(RC4==1)
LCD(n,1);
if(RC5==1)
LCD(o,1);
if(RC6==1)
LCD(p,1);
}
void fun( char *name)
{
RB0=1;RB1=0;
while(*name)
{
PORTA=*name++;
pulse();
}}
void main()
{
int count=0;
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
TRISC=0x78;
PORTC=0x00;
ANSEL=0x00;ANSELH=0x00;
LCD(0x38,0);
LCD(0x0E,0);
LCD(0x80,0);
while(1)
{
input();
if(RC3==1||RC4==1||RC5==1)
{
dec(0x31,0x34,0x37,0);
while(RC3==1||RC4==1||RC5==1);
count++;
}
input1();
if(RC3==1||RC4==1||RC5==1||RC6==1)
{
dec(0x31,0x34,0x37,0x30);
while(RC3==1||RC4==1||RC5==1);
count++;
}
input2();
if(RC3==1||RC4==1||RC5==1)
{
dec(0x31,0x34,0x37,0);
while(RC3==1||RC4==1||RC5==1);
count++;
}
//----------------//
input();
if(RC6==1)
{
if(count==10)
{
LCD(0xc0,0);
fun("calling");
}
if(count!=10)
{
LCD(0xc0,0);
fun("Not valid");
}
}
input3();
if(RC6==1)
{
if(count==10)
{
LCD(0xc0,0);
fun("calling");
}

}}
