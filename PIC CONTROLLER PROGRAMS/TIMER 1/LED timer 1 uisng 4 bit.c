#include<pic.h>
#define _XTAL_FREQ 4000000
void pulse()
{
RC7=1;
__delay_ms(0);
RC7=0;
__delay_ms(0);
}
void type(int a,int b)
{
RC5=b;RC6=0;
PORTD=(a&0xf0)>>4;
pulse();
//PORTA=(a>>4&0x0f);
//pulse();
PORTD=(a&0x0f);
pulse();
}
void main()
{
int count=0,sec,min,dig1=0,dig2=0,dig3=0,dig4=0;
TRISA=0x00;
PORTA=0x00;
TRISB=0x00;
PORTB=0x00;
TRISC=0x00;
PORTC=0x00;
TRISD=0x00;
PORTD=0x00;
ANSEL=0x00;ANSELH=0x00;
T1CON=0x29;
//TMR1=55536;  //give the value is directly
TMR1L=0xF0;
TMR1H=0xD8;    //give the value is splittingly
//type(0x02,0);
type(0x02,0);
type(0x28,0);
type(0x0E,0);
int x,y,z;
while(1)
{
if(TMR1IF==1)
{
count++;
x=count/10;
y=count%10;
TMR1IF=0;
TMR1L=0xF0;
TMR1H=0xD8;
//TMR1=55536;  
}
if(count<=25)
{
type(0x8e,0);
type(0x30+x,1);
type(0x8f,0);
type(0x30+y,1);
}
if(count==25)
{
sec++;
dig1=sec/10;
dig2=sec%10;
type(0x87,0);
type(0x30+dig1,1);
type(0x88,0);
type(0x30+dig2,1);
count=0;
}
if(sec==60)
{
min++;
dig3=min/10;
dig4=min%10;
type(0x80,0);
type(0x30+dig3,1);
type(0x81,0);
type(0x30+dig4,1);
sec=0;
}
}
}

