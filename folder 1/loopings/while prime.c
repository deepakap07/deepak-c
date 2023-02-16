//while prime
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,val=0,j;
	printf("Enter the number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if((n%i)==0);
		{
			val=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				val++;
			}
		}
		if(val==2)		
		printf("\n%d",i);
		i++;
	}
}

