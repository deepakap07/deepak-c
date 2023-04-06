#include<pic.h>
#define _XTAL_FREQ 4000000
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
int count=0,sec=0,min=0;
void display1(int,int,int)
{
RC2=0;RC3=0;RC4=0;RC5=0;RC7=0;RC6=1;
PORTD=seg1[count/10];
__delay_ms(8);
RC2=0;RC3=0;RC4=0;RC5=0;RC6=0;RC7=1;
PORTD=seg1[count%10];
__delay_ms(8);

RC2=0;RC3=0;RC5=0;RC6=0;RC7=0;RC4=1;
PORTD=seg1[sec/10];
__delay_ms(8);
RC2=0;RC3=0;RC4=0;RC6=0;RC7=0;RC5=1;
PORTD=seg1[sec%10];
__delay_ms(8);

RC4=0;RC3=0;RC5=0;RC6=0;RC7=0;RC2=1;
PORTD=seg1[min/10];
__delay_ms(8);
RC2=0;RC5=0;RC4=0;RC6=0;RC7=0;RC3=1;
PORTD=seg1[min%10];
__delay_ms(8);
}
void main()
{
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
//type(0x38,0);
//type(0x0E,0);
int x,y,z;
while(1)
{
if(TMR1IF==1)
{
count++;
TMR1IF=0;
TMR1L=0xF0;
TMR1H=0xD8;
//TMR1=55
}
display1(count,sec,min);
if(count==25)
{
sec++;
count=0;
}
if(sec==6)
{
min++;
sec=0;
}
}
}


























/*
void segment(int a,int m,int j)
{
RC2=0;RC3=0;RC4=0;RC5=0;RC6=0;RC7=1;
PORTC=(a/10);
__delay_ms(100);

RC2=0;RC3=0;RC4=0;RC5=0;RC7=0;RC6=1;
PORTC=(a%10);
__delay_ms(100);

RC2=0;RC3=0;RC4=0;RC6=0;RC7=0;RC5=1;
PORTC=(m/10);
__delay_ms(100);

RC2=0;RC3=0;RC5=0;RC6=0;RC7=0;RC4=1;
PORTC=(m%10);
__delay_ms(100);

RC2=0;RC4=0;RC5=0;RC6=0;RC7=0;RC3=1;
PORTC=(j/10);
__delay_ms(100);

RC3=0;RC4=0;RC5=0;RC6=0;RC7=0;RC2=1;
PORTC=(j%10);
__delay_ms(100);
}*/