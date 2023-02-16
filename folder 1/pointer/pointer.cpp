#include<stdio.h>
int main()
{
	int *p;
	int var=10;
	p=&var;
	printf("value of variable var is:%d",var);
	printf("\nvalue of variable var is:%d",p);
	printf("\naddress of variable var is:%p",&var);
	printf("\naddress of variable var is:%p",p);
	printf("\naddress of variable p is:%p",&p);
}
