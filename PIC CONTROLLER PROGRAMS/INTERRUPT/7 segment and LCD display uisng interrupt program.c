#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED RA0
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
int i,z,j,m,n,x,y;
void pulse()
{
RE2=1;
__delay_ms(10);
RE2=0;
__delay_ms(10);
}
void display(int a,int b)
{
RE0=b;RE1=0;
PORTD=a;
pulse();
}
void interrupt git()
{
if(INTF==1)
{
for(m=0;m<10;m++)
{
for(n=0;n<10;n++)
{
RC6=0;RC7=1;
PORTA=seg1[n];
__delay_ms(50);
RC7=0;RC6=1;
PORTA=seg1[m];
__delay_ms(50);
}
}
//if((m=9)&&(n=9))
INTF=0;
}
}
void main()
{
int count=0;
TRISA=0x00;
PORTA=0x00;
TRISE=0x00;
PORTE=0x00;
TRISC=0x00;
PORTC=0x00;
TRISB=0x01;
PORTB=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
INTCON=0xd0;
display(0x38,0);
display(0x0E,0);
while(1)
{
for(int i=0;i<500;i++)
{
x=i/100;
y=(i%100)/10;
z=i%10;
display(0x80,0);
display(0x30+x,1);
display(0x81,0);
display(0x30+y,1);
display(0x82,0);
display(0x30+z,1);
}
}
}