#include<stdio.h>
int fact(int n);
int main(){
	int num,r,a,value;
	printf("enter a number:\n");
	scanf("%d",&num);
	printf("enter the base:\n");
	scanf("%d",&r);
	a=num-r;
	if(num>r){
		
		value= fact(num)/(fact(r)*fact(a));
		printf("the value of ncr is:%d",value);		
	}
	else{
		printf("404");
	}
	
	return 0;
	
}
int fact(int n)
{
  int i,fact=1;
  for( i=1; i<=n; i++)
	{
	 fact=fact*i;
	}
	return fact;
	}
