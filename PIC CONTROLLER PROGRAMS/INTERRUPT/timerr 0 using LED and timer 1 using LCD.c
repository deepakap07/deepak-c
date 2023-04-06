#include<pic.h>
#define _XTAL_FREQ 4000000
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
int count=0,sec=0,min=0,count1=0;
void segment(int,int)
{
RB0=0;RB1=0;RB3=0;RB2=1;
PORTA=seg1[count1/10];
__delay_ms(10);
RB1=0;RB0=0;RB2=0;RB3=1;
PORTA=seg1[count1%10];
__delay_ms(10);

RB3=0;RB2=0;RB1=0;RB0=1;
PORTA=seg1[sec/10];
__delay_ms(10);
RB0=0;RB2=0;RB3=0;RB1=1;
PORTA=seg1[sec%10];
__delay_ms(10);
}
void pulse()
{
RC7=1;
__delay_ms(10);
RC7=0;
__delay_ms(10);
}
void display(int a,int b)
{
RC5=b;RC6=0;
PORTD=a;
pulse();
}
void main()
{
int count=0;
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
OPTION_REG=0x95;
T1CON=0x29;
//TMR1=55536;  //give the value is directly
TMR0=131;
TMR1L=0xF0;
TMR1H=0xD8;
display(0x38,0);
display(0x0E,0);
int x,y,z;
while(1)
{
if((TMR1IF==1)&&(T0IF==1))
{
count++;
count1++;
x=count/100;
y=(count%100)/10;
z=count%10;
display(0x80,0);
display(0x30+x,1);
display(0x81,0);
display(0x30+y,1);
display(0x82,0);
display(0x30+z,1);
TMR1IF=0;
T0IF=0;
TMR1L=0xF0;
TMR1H=0xD8;
TMR0=131;
}
segment(count,sec);
if(count1==125)
{
sec++;
count=0;
}
}
}



