#include<stdio.h>
int main()
{
	int i,j,n,m,k;
	printf("Enter the row:");
	scanf("%d",&n);
	printf("Enter the column:");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k=(i%2==0))
			{
			printf("0");
			}
			else
			{
				printf("1");
			}
	}
	
		printf("\n");
}
}
