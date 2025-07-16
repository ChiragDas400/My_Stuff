#include<stdio.h>
int main(){
	FILE *fptr;
	fptr= fopen("text.txt","w");
	/*printf("%c",fgetc(fptr));
	printf("%c",fgetc(fptr));
	printf("%c",fgetc(fptr));
	printf("%c",fgetc(fptr));
	printf("%c",fgetc(fptr));
	fptr= fopen("text.txt","w");
	fputc('A',fptr);
	fputc('P',fptr);
	fputc('P',fptr);
	fputc('l',fptr);
	fputc('E',fptr);
	fclose(fptr);
}*/
char name[100];
int age;
float cgpa;
printf("enter the name");
scanf("%s",name);
printf("enter your age");
scanf("%d\n",&age);
printf("enter your cgpa");
scanf("%f\n",&cgpa);
fprintf(fptr,"%s",name);
fprintf(fptr,"%d",age);
fprintf(fptr,"%f",cgpa);
fclose(fptr);
}


