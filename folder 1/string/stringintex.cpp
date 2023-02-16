//task:to find the given strings appearing character
//21:01:23
#include<stdio.h>
int main()
{
    int i,count=0;
	char name[90],bit;
	gets (name);
	puts(name);
	printf("enter which character you want :");
	scanf(" %c",&bit);
	for(i=0;i<name[i];i++)
	{
		if(name[i]==bit)
		 { 
		 count++;
		 printf("\n%d",i);
		 }
	}
	printf("\n%d",count);
}
