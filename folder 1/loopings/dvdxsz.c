//find index of an array
//11-01-2023
#include<stdio.h>
int main()
{
	int i,pos,j,val,temp=0,inr[50];
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
