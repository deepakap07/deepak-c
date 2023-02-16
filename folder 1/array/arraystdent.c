//student name 5 marks get and average
//created by deepak
//11-1-2023

#include<stdio.h>
int main()
{
	char name[10];
	int marks[5],sum,i,mark=0;
	float avg;
	 printf("Enter the name:");
	for(i=0;i<5;i++)
	{
	 scanf(" %c",&name[i]);
	}
	printf ("marks:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=mark+marks[i];
	}
	avg=(float)sum/5;
printf("Average:%f",avg);
}
