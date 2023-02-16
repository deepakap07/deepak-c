//perfect numers (while loop)
//createted by deepak
#include<stdio.h>
int main()
{
	int i,n,sum=0,val;
	printf("Enter the value");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		val=n%i;
		if(val==0)
		sum=sum+i;
		i++;
	}
	printf("\nsum=%d",sum);
	if(sum==n)
	{
	printf("it is perfect number");
	}
	else
	{
	printf("It is not a perfect number");
	}
}
