#include<stdio.h>
int printarr(int arr[],int n);
int main(){
	int arr[100],n,i,even[100],odd[100],e=0,o=0;
	printf("Enter the no.of elements:\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printarr(arr,n);
/*	for(i=0;i<n;i++){
		if(i%2==0){
			even[e]=arr[i];
			e++;
		}
		else{
			odd[o]=arr[i];
			o++;
		}
		
	}
	printf("The resultant odd positioned elements array is:-\n");
	for(i=0;i<o;i++){
		printf("%d\t",odd[i]);
	}
	printf("\n");
	printf("The resultant even positioned elements array is:-\n");
	for(i=0;i<e;i++){
		printf("%d\t",even[i]);
	}
	printf("\n");*/
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even[e]=arr[i];
			e++;
		}
		else{
			odd[o]=arr[i];
			o++;
		}
		
	}
	printf("The resultant odd array is:-\n");
	for(i=0;i<o;i++){
		printf("%d\t",odd[i]);
	}
	printf("\n");
	printf("The resultant even array is:-\n");
	for(i=0;i<e;i++){
		printf("%d\t",even[i]);
	}
	printf("\n");
}
int printarr(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	    	}
	return printf("\n");
	
}

	

