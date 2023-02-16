/*
	Date: 14/01/23 20:48
	Description: multiplication of two dimensional array*/
#include<stdio.h>
int main()
{
	int i,j,k[100][100],l[100][100],m[100][100],n,h;
	printf("Enter the size of matrix:");
	scanf("%d",&n);
	printf("\nMatrix A");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&k[i][j]);
		}
	}
	printf("\nMatrix B");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&l[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m[i][j]=0;
			for(h=0;h<n;h++)
			{			
			m[i][j]=m[i][j]+k[i][h]*l[h][j];
		}
	}
}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
			printf("\t%d",m[i][j]);
			}
		printf("\n");
		}
}

