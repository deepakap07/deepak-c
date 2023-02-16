// while loop armstrong number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,val,num,n,arm,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	val=n;
	i=0;
	while(i<n)
	{
		num=n%10;
		arm=num*num*num;
		sum=sum+arm;
		n=n/10;
	}
printf("\n%d",sum);

if(sum==val)
printf("Armstrong number");
else
printf("Not a armstorng number");
}
