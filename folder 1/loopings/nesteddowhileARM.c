#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,rem,sum,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	i=1;
	do
	{
		temp=i;
		do
		{
		sum=0;
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;	
		}while(temp!=0);
		if(sum==i)
		printf("\n%d",sum);
	i++;
	}while(i<n);

}



