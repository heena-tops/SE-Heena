// How to take input from user and add it into a file

#include<stdio.h>

main()
{
	FILE * fp;
	int id;
	char name[20];
	float height;
	
	fp = fopen("6_July.txt","w");
	
	printf("Enter Id : ");
	scanf("%d",&id);
	
	fflush(stdin);
	
	printf("Enter name : ");
	gets(name);
	
	printf("Enter Height : ");
	scanf("%f",&height);
	
	
	fprintf(fp,"ID = %d",id);
	fprintf(fp,"\nName = %s",name);
	fprintf(fp,"\nHeight = %.2f",height);
	
	fclose(fp);
}
