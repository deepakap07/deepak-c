#include<pic.h>
#define _XTAL_FREQ 400000
int sum=0;
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
void fun( char *name)
{
RB0=1;RB1=0;
while(*name)
{
PORTA=*name++;
pulse();
}
}
void library(int m,int n,int o);
{
int seg[]=(0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39);
int count[20],i=0;
if(RC3==1)
{
LCD(seg[m],1);
count[i]=m;
sum=((sum*10)+count[i]);
i++;
}
if(RC4==1)
{
LCD(seg[n],1);
count[i]=n;
sum=((sum*10)+count[i]);
i++;
}
if(RC5==1)
{
LCD(seg[o],1);
count[i]=o;
sum=((sum*10)+count[i]);
i++;
}
}
void keypad()
{
int m=8;
while(m)
{
input();
if(RC3==1||RC4==1||RC5==1)
{
dec(0x31,0x34,0x37,0);
while(RC3==1||RC4==1||RC5==1);
}
input1();
if(RC3==1||RC4==1||RC5==1||RC6==1)
{
dec(0x32,0x35,0x38,0x30);
while(RC3==1||RC4==1||RC5==1);
}
input2();
if(RC3==1||RC4==1||RC5==1)
{
dec(0x33,0x36,0x39,0);
while(RC3==1||RC4==1||RC5==1);
}
if(RC6==1)
m=0;
}
}