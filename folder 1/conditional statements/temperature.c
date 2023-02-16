// Temperature using switch

//Date: 03/01/2023
#include<stdio.h>
#include<conio.h>
int main()
{
	float temp;
	printf("temperature:");
	scanf("%f",&temp);
	if(temp<=25)
	{
		printf("Normal");
	}
	else if((temp>=26)&&(temp<=50))
	{
		printf("Moderate");
	}
	else if((temp>=51)&&(temp<=100))
	{
		printf("Temperature is high fever");
	}
	else if (temp>=101)
	{
		printf("Machhine error");
	}
}
