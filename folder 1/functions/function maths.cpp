#include<stdio.h>
void sum();     // without return without argument :
int sub(int);   // with return with argument :
void mult(int);  // without return with argument :
int div();   // with return without argument :

int main()
{
	int operater,nums,res,numb,n;
	topmenu:
	printf("what operation you want to perform :\n");
	printf("1.add 2.sub 3.mul 4.div\n ");
	scanf("%d",&operater);
	
	switch (operater)
	{
	case 1:
		mainmenu:
		sum();
	    printf("press 1-continue\t 2-mainmenu\t 0-exit:");
	    scanf("%d",&n);
	    if(n==1)
	    goto mainmenu;
	    else if(n==2)
	    goto topmenu;
		break;
    case 2:
    	submenu:
		printf("how many values you want to sub :\n");
	    scanf("%d",&nums);
		res=sub(nums);    	
		printf("%d\n",res);
		printf("press 1-continue\t 2-mainmenu\t 0-exit:");
		scanf("%d\n",&n);
		 if(n==1)
		goto submenu;
	    else if(n==2)
	    goto topmenu;
		break;
	case 3:
		middlemenu:
		printf("how many values you want to mul :\n");
	    scanf("%d",&numb);
	    mult(numb);
	    printf("press 1-continue\t 2-mainmenu\t 0-exit:");
	    scanf("%d",&n);
		 if(n==1)
		  goto middlemenu;
	    else if(n==2)
	    goto topmenu;
		break;
	case 4:
		bottommenu:
	    div();
	    printf("press 1-continue\t 2-mainmenu\t 0-exit:");
	    scanf("%d",&n);
	    if(n==1)
	    goto bottommenu;
	    else if(n==2)
	    goto topmenu;
		break;	
	}
}
void sum()
{
	int i,addition[50],nums,res=0,n;
	printf("how many values you want to add :\n");
	scanf("%d",&nums);
	for(i=0;i<nums;i++)
	{
		scanf("%d",&addition[i]);
			res=res+addition[i];
	}

	printf("%d\n",res);

}
int sub(int num)
{
    int i,subraction[50],res;
    for(i=0;i<num;i++)
	{
	scanf("%d",&subraction[i]);
	}
	res=subraction[0];
	for(i=1;i<num;i++)
	{
	res=res-subraction[i];
	}	
      return res;
}
void mult(int numb)
 {
 	int i,multiplication[50],res=1;
 	for(i=0;i<numb;i++)
 	{
 		scanf("%d",&multiplication[i]);
	 }
	 res=multiplication[0];
	 for(i=1;i<numb;i++)
	 {
	 	res=res*multiplication[i];
	 }
	 printf("%d\n",res);
 }
int div()
{
	int i,num,res=0,division[60];
	printf("how many values you want to divide :\n");
	scanf("%d",&num);
    for(i=0;i<num;i++)
 	{
 		scanf("%d",&division[i]);
	 }
	 res=division[0];
	 for(i=1;i<num;i++)
	 {
	 	res=res/division[i];
	 }
	 printf("%d\n",res);
}
