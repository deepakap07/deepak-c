#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED RA0
int count=0,i=0,count2=0,count1=0,x,y,z;
void pulse()
{
RC7=1;
__delay_ms(1);
RC7=0;
__delay_ms(1);
}
void type(int a,int b)
{
RC5=b;RC6=0;
PORTD=a;
pulse();
}
void interrupt git()
{
if(TMR1IF==1)
{
count++;
count1++;
count2++;
type(0x80,0);
type(0x30+(count/100),1);
type(0x81,0);
type(0x30+((count%100)/10),1);
type(0x82,0);
type(0x30+count%10,1);
TMR1IF=0;
TMR1L=0xF0;
TMR1H=0xD8;
//TMR1=55536;
if(count1==50)
{
if((i<3)&&(count1<=30))
{
RA3=1;
if((count1>30)&&(count1<=60))
{
RA3=0;
if(count1>=60)
{
count1=0;
}
}i++;
}
}
if(count1>=50)
{
count1=0;
}
}}
void main()
{
TRISA=0x00;
PORTA=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
GIE=1;
PEIE=1;
TMR1IE=1;
T1CON=0x29;
//TMR1=55536;  //give the value is directly
TMR1L=0xF0;
TMR1H=0xD8;    //give the value is splittingly
//type(0x02,0);
type(0x38,0);
type(0x0E,0);
int x,y,z;
while(1)
{
if(count<=100)
{
RA0=1;
}
if((count>100)&&(count<=200))
{
RA0=0;RA1=1;
}
if((count>200)&&(count<=300))
{
RA0=0;RA1=0;RA2=1;
}
if((count>300))
{
RA2=0;
count=0;
}
}
}