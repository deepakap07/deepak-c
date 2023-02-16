//task: print reverse of string
//date:20:01:2023
#include<stdio.h>
int main()
{
	int count=0,i;
	char a[50];
	gets(a); //get the string form user:
	for(i=0;a[i]!='\0';i++) // to find the length of the string;  
	{
		count++; //count a given values
	}
	for(i=count;i>=0;i--) // to print the reverse of given string;
	{
		printf(" %c",a[i]);
	}
}
