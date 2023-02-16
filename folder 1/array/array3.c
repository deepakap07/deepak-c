#include<stdio.h>
int main()
{
	int i,a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("value a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("value b[%d]= ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("\nAdditionc[%d]= %d",i,c[i]);
		}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]*b[i];
		printf("\nsubtraction
		c[%d]= %d",i,c[i]);
	}
	
	for(i=0;i<5;i++)
	{
		c[i]=a[i]*b[i];
		printf("\nmultiplicationc[%d]= %d",i,c[i]);
	}
	
}
