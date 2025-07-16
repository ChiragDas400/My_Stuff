#include<stdio.h>
#define size 10
int main(){

FILE *fp;
int rows,cols;
int mat[10][10];
fp=fopen("mat.txt","r");
fscanf(fp,"%d",&rows);
fscanf(fp,"%d",&cols);
int i,j;
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		fscanf(fp,"%d",&mat[i][j]);
		printf("%d\t",mat[i][j]);
			}
			printf("\n");
}
fclose(fp);
}

