#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,rem,sum,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=0;
		temp=i;	
		while(temp!=0)
		{	
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(sum==i)
	printf("\n%d",sum);
}
}



