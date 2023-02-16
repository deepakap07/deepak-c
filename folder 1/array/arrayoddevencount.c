#include<stdio.h>
int main()
{
	int a[10],i,n=0,n1=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the value a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	if(a[i]%2==0)
	{
		n++;
	}
}
	printf("\neven count:%d",n);
	for(i=0;i<10;i++)
	{
	if(a[i]%2!=0)
	{
		n1++;
	}
}
	printf("\nodd count:%d",n1);
}

