#include<stdio.h>
int main()
{
	int i,j,k,a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("value a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<5;j++)
	{
		printf("value b[%d]= ",j);
		scanf("%d",&b[j]);
	}
	for(k=0;k<5;k++)
	{
		i=j=k;
		c[k]=a[i]+b[j];
		printf("\nAdditionc[%d]= %d",k,c[k]);
		}
}
	
