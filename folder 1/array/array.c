#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter the %d value:",i);
		scanf("%d",&a[i]);
			
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
}