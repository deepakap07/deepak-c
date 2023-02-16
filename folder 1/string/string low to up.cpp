#include<stdio.h>
int main()
{ 
  int i;
  char name[50];
  printf("enter lower case ");
  gets(name);    
  for(int i=0;name[i]!='\0';i++)
  {
  	name[i]=name[i]-32;
  }
  printf("upper case is%s",name);
}
