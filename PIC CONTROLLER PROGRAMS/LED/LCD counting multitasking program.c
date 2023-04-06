#include<pic.h>
#define _XTAL_FREQ 400000
int count,count1,total=0;
void pusle();
void display(int);
void LCD(int int);
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISB=0x68;
PORTB=0x00;
ANSEL=0x00;ANSELH=0x00;
LCD(0x38,0);
LCD(0x0E,0);
while(1)
{
if(RB3==1)
{
LCD(0x80,0);
count++;
display(count);
while(RA3==1);
}
if(RB5==1)
{
LCD(0x8E,0);
count1++;
display(count1);
while(RA5==1);
}
if(RB6==1)
{
LCD(0xC7,0);
total=count+count1;
display(total-1);
while(RA6==1);
}
}
}
void pulse()
{
RB2=1;
__delay_ms(1000);
RB2=0;
__delay_ms(1000);
}
void LCD(int a, int b)
{
RB0=b;RB1=0;
PORTC=a;
pulse();
}
void display(int z)
{
LCD((0x30)+(z-1)/10,1);
LCD((0x30)+(z-1)%10,1);
}