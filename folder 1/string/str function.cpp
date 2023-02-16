#include<stdio.h>
#include<string.h>
int main()
{
	char name[50],age[50];
	gets(name);
	gets(age);
/*	puts(name);
	strlen(name);
	printf("%d",strlen(name));*/
/*	strcpy(age,name);
	puts(age);*/
	strcat(name,age);
	puts(name);
	
}
