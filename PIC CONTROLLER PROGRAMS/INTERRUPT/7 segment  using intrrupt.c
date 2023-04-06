#include<pic.h>
#define _XTAL_FREQ 4000000
#define LED RA0
char seg1[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
int i,j,m,n,x,y;
void interrupt git()
{
if(INTF==1)
{
for(m=0;m<10;m++)
{
for(n=0;n<10;n++)
{
RE1=0;RE0=1;
PORTD=seg1[m];
__delay_ms(50);
RE0=0;RE1=1;
PORTD=seg1[n];
__delay_ms(50);
RC7=0;RC6=1;
PORTA=seg1[i];
__delay_ms(50);
RC6=0;RC7=1;
PORTA=seg1[j];
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
while(1)
{
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
RC7=0;RC6=1;
PORTA=seg1[i];
__delay_ms(50);
RC6=0;RC7=1;
PORTA=seg1[j];
__delay_ms(50);
}
}
}
}
