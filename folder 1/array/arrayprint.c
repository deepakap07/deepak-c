//print array int,float,char
//created by deepak
//11-01-2023
#include<stdio.h>
int main()
{
	int num1[2];
	float num2[2];
	char num3[7];
	printf("integer");
	scanf("%d\n%d",&num1[0],&num1[1]);
	printf("float");
	scanf("%f%f",&num2[0],&num2[1]);
	printf("char");
	scanf(" %c  %c",&num3[0],&num3[1]);
	printf("\n%d\n%d %f\n%f \n%c\n%c",num1[0],num1[1],num2[0],num2[1],num3[0],num3[1]);
}


