// for loop 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,mul,j,m=1;
	printf("table:");
	scanf("%d",&mul);
	for(i=1;i<=20;i++)
	{
		j=mul*m++;
		printf("%d*%d=%d\n",i,mul,j);
	}
}
