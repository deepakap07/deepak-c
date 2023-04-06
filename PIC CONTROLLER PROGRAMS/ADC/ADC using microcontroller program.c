#include<pic.h>
#define _XTAL_FREQ 4000000
#define RS RC5
#define RW RC6
#define EN RC7
int DV,high,low;
void pulse()
{
EN=1;
__delay_us(10);
EN=0;
__delay_us(10);
}
void display(int a,int b)
{
RS=b;RW=0;
PORTD=a;
pulse();
}
void count(int i)
{
display(0X80,0);
display(0X30+(i/1000),1);
display(0X81,0);
display(0X30+((i%1000)/100),1);
display(0X82,0);
display(0X30+((i%100)/10),1);
display(0X83,0);
display(0X30+(i%10),1);
}
void voltage()
{
display(0xc0,0);
int a,b,c,d;
float z;
z=(DV*5.0)/1023.0;
d=z*100;
a=d/100;
b=(d%100)/10;
c=d%10;
display(0x30+a,1);
display(0x2e,1);
display(0x30+b,1);
display(0x30+c,1);
display(0x20,1);
display(0x56,1);
}
void adc()
{
ADCON0=0x81;ADCON1=0x80;
GO=1;
while(GO);
high=ADRESH;low=ADRESL;//DV=L+(H*256);
if(high==0)
{
DV=low;
}
if(high==1)
{
DV=low+256;
count(DV);
}
 if(high==2)
{
DV=low+512;
count(DV);
}
 if( high==3)
{
 DV=low+768;
count(DV);
} 
}
void main()
{
TRISA=0x01;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x01;ANSELH=0x00;
display(0x38,0);
display(0x0E,0);
while(1)
{
adc();
voltage();
}
}
 //split DV and display in lcd;