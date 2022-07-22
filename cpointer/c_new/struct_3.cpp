//structure of a structure

#include<stdio.h>

struct Student
{
	int id;
	char name[20];
	int marks;	
};

struct School
{
	struct Student s1;
	int s_id;
	char name[20];	
};

main()
{
	struct School sc;
	
	printf("\n\n Enter School Info \n\n");
	
	printf("Enter id : ");
	scanf("%d",&sc.s_id);
	
	fflush(stdin);
	
	printf("Enter Name : ");
	gets(sc.name);
	
	printf("\n\n Enter Student Info \n\n");
	
	printf("Entre Id : ");
	scanf("%d",&sc.s1.id);
	
	fflush(stdin);
	
	printf("Entre name : ");
	gets(sc.s1.name);
	
	printf("Enter marks : ");
	scanf("%d",&sc.s1.marks);
	
	printf("\n\n------------------------Display------------------------\n\n");
	
	printf("\n\n	School Info		\n");
	
	printf("\nId = %d",sc.s_id);
	printf("\nName = %s",sc.name);
	
	printf("\n\n	Student Info	\n");
	printf("\nId = %d",sc.s1.id);
	printf("\nName = %s",sc.s1.name);
	printf("\nMarks = %d",sc.s1.marks);
}
