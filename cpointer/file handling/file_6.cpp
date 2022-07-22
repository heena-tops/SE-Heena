// Write a program to read the names and marks of n numbers of students
// and store them into a file

#include<stdio.h>
int a;

main()
{
	FILE * fp;
	int i,marks;
	char name[20];
	
	fp= fopen("file_6.txt","w");
	
	for(i=0;i<3;i++)
	{
		fflush(stdin);
		printf("Enter name : ");
		gets(name);
		
		printf("Enter marks : ");
		scanf("%d",&marks);
		
		fprintf(fp,"\n\nName = %s",name);
		fprintf(fp,"\nMarks = %d",marks);
	}
	
	fclose(fp);
}
