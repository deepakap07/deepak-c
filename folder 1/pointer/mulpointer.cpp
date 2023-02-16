#include<stdio.h>
void function(int*,int*);
int main()
{
	int x[50],y[50],i,n;
	int *p1,*p2;
	printf("enter the matrix base");
	scanf("%d",&n);
	printf("enter the first matrix");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter the second matrix");
	for(i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
	}
	p1=x;
	p2=y;
	function(x,y);
}
void function(int*x,int*y)
{
	printf("\n\t%d",((*x)*(*y))+(*(1+x)*(*(1+y))));
	printf("\t%d",((*x)*(*(y+1)))+((*(x+1))*(*(y+3))));
	printf("\n\t%d",((*(x+2))*(*y))+((*(x+3))*((*(y+2)))));
	printf("\t%d",((*(x+2))*(*(y+1)))+((*(x+3))*(*(y+3))));
}
