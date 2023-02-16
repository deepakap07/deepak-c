//perfect numers (do while loop)

#include<stdio.h>
int main()
{
	int i,n,sum=0,val;
	printf("Enter the value");
	scanf("%d",&n);
	i=1;
	do
	{
		val=n%i;
		if(val==0)
		sum=sum+i;
		i++;
	}while(i<n);
	printf("\nsum=%d",sum);
	if(sum==n)
	{
	printf("\nit is perfect number");
	}
	else
	{
	printf("\nIt is not a perfect number");
	}
}
