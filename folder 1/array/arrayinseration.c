//insersation of an array
//created by deepak
//11-01-2023
#include<stdio.h>
int main()
{
	int i,pos,j,val,temp=0,inr[50]={5,6,7,9,10};
	printf("Before inserting the value:");
	for(i=0;i<5;i++)
	{
	printf("%d",inr[i]);
	}
	printf("\nEnter the position:");
	scanf("%d",&pos);
	pos=pos-1;
	printf("\nInsertion value");
	scanf("%d",&val);
	for(i=5;i>=pos;i--)
	{
	inr[i+1]=inr[i];
	}
	inr[pos]=val;
	for(i=0;i<6;i++)
	{
	printf("%d",inr[i]);
	}
}


	
	
	
		
