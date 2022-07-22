// structure : structure within a structure

#include<stdio.h>

struct Student
{
	int Id;
	char name[20];
	float marks;	
};

struct faculty
{
	struct Student s1;	
};

main()
{
	struct faculty f1;
	
	printf("Enter Id : ");
	scanf("%d",&f1.s1.Id);
	
	fflush(stdin);
	
	printf("Enter name : ");
	gets(f1.s1.name);
	
	printf("Enter marks : ");
	scanf("%f",&f1.s1.marks);
	
	printf("\n\n------------------Display-------------------\n\n");
	
	printf("Id = %d\n",f1.s1.Id);
	printf("Name = %s\n",f1.s1.name);
	printf("Marks = %.2f",f1.s1.marks);
}
