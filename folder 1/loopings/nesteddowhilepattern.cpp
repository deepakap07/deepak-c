#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the row:");
	scanf("%d",&n);
	i=1;
	do
	{
		j=1;
		do
		{
		printf("*");
		j++;	
		}while(j<=i);
	i++;
	printf("\n");
}while(i<=n);
}
	
