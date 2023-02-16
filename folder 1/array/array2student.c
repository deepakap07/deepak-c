// 2 student name get,marks,avg
//created by deepak
//11/1/2023
#include<stdio.h>
int main()
{
	char stud1[10],stud2[10];
	int i,std1marks[5],std2marks[5];
	float avg,sum=0,sum1=0;
	printf("Enter the student1 name ");
	for(i=0;i<5;i++)
	{
		scanf(" %c",&stud1[i]);
	}
	printf("Enter student1 marks:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&std1marks[i]);
		sum=sum+std1marks[i];
	}
	printf("\nTotal:%f",sum);
	avg=sum/5;
	printf("\nAverage:%f",avg);
	printf("\nEnter the 2nd student name:");
	for(i=0;i<5;i++)
	{
		scanf(" %c",&stud2[i]);
	}
	printf("\nEnter student2 marks:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&std2marks[i]);
		sum1=sum1+std2marks[i];
	}
	printf("\nTotal:%f",sum1);
	avg=sum1/5;
	printf("\nAverage:%f",avg);
}
