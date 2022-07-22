// how to take input of n numbers of student from user and store into a file

#include<stdio.h>

main()
{
	int id,marks,i,num;
	char name[20];
	
	FILE *fp;
	
	fp=fopen("Student_1.txt","a+");
	
	printf("How many Student are there in your class ? ");
	scanf("%d",&num);

	fprintf(fp,"\n\n-------------------This is Student Data-------------------------\n\n");
	
	for(i=0;i<num;i++)
	{
		printf("\n\nEnter Id : ");
		scanf("%d",&id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(name);
		
		printf("Enter marks : ");
		scanf("%d",&marks);
		
		fprintf(fp,"\n\nId = %d",id);
		fprintf(fp,"\nName = %s",name);
		fprintf(fp,"\nMarks = %d",marks);
	}
	
}
