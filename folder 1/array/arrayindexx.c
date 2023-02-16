//find index of an array
//created deepak
//11-01-2023
#include<stdio.h>
int main()
{
	int n,i,pos,j,val,temp=0,inr[n];
	scanf("%d",&n);
	printf("Enter the value:");
	for(i=0;i<7;i++)
	{
	scanf("%d",&inr[i]);
	}
	for(i=0;i<7;i++)
	{
	printf("%d",inr[i]);
	}
	printf("\nEnter the value:");
	scanf("%d",&val);
	for(i=0;i<7;i++)
	{
	if(val==inr[i])
	printf("index %d",i);
}
}
