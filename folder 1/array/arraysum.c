#include<stdio.h>
int main()
{
	int a[5],i,b=0;
	float avg;
	for(i=0;i<5;i++)
	{
		printf("Enter the %d value:",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		b=b+a[i];
	}
		printf("%d",b);
		avg=b/5;
	printf("\n%f",avg);
}
