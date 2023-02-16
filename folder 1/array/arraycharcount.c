//array of charater count
//created by deepak
//12-1-2023
#include<stdio.h>
int main()
{
	int i,n;
	char alph[90];
	printf("Enter the n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" %c",&alph[i]);
	}
	printf("\nCapital letters");
	for(i=0;i<n;i++)
	{
	if((alph[i]>=65)&&(alph[i]<=90))
	{
		printf("\n%c",alph[i]);
	}
}


	printf("\nSmall letters");
	for(i=0;i<n;i++)
	{
	if((alph[i]>=97)&&(alph[i]<=124))
	{
		printf("\n%c",alph[i]);
	}
}
}
