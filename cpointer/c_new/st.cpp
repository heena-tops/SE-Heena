//array of a structure

#include<stdio.h>

struct Student
{
	int id;
	char name[20];
	float height;
};

struct School 
{
	struct Student s1;
	int s_id;
	char s_name[20];	
};

main()
{
	struct School sc;
	
	printf("\n\n	School Info.	\n\n");
	
	printf("Enter Id : ");
	scanf("%d",&sc.s_id);
	
	fflush(stdin);
	
	printf("Enter name : ");
	gets(sc.s_name);
	
	printf("\n\n	Student Info.	\n\n");
	
	printf("Enter Id : ");
	scanf("%d",&sc.s1.id);
	
	fflush(stdin);
	
	printf("Enter name : ");
	gets(sc.s1.name);
	
	printf("Enter Height : ");
	scanf("%f",&sc.s1.height);
	
	printf("\n\n-------------------Display---------------------\n\n");
	
	printf("\n\n	School Info.	\n\n");
	
	printf("Id : %d",sc.s_id);
	
	printf("\nName : %s",sc.s_name);
	
	printf("\n\n	Student Info.	\n\n");
	
	printf("Id : %d",sc.s1.id);
	
	printf("\nName : %s",sc.s1.name);
	
	printf("\nHeight : ",sc.s1.height);
}




