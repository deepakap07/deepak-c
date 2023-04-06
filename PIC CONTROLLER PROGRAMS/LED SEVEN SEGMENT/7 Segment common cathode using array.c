#include<pic.h>
#define _XTAL_FREQ 400000
void main()
{
char seg[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x83,0xf8,0x80,0x98};
TRISA=0x00;
PORTA=0x00;
ANSEL=0;ANSELH=0;
for(int i=0;i<=10;i++)
{
PORTA=seg[i];
__delay_ms(10000);
}

}
