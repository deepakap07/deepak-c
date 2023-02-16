//while loop greatest number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,v1,num=0;
	printf("Enter the numbers");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("The number :");
		scanf("%d",&v1);
		if(num<v1)
		{
			num=v1;
			i++;		
		}
		if(i>n)
	printf("the greatest number is %d",num);
		}
	
}
