#include<stdio.h>
int main(){
	int num[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	char *sym[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Roman Version----->");
	if(n<1||n>3999){
		printf("Duhhh! are you nuts?");
	}
	else{
	
	for(i=0;i<13;i++){
		while(n>=num[i]){
			
			printf("%s",sym[i]);
			n-=num[i];
			
		}
	}
}
	
}
