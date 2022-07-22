//structure with functions

#include<stdio.h>

struct student 
{
	int id;
	char name[20];
	float height;	
};

void display(struct student s1)
{
	printf("\n\nId = %d",s1.id);
	printf("\nName = %s",s1.name);
	printf("\nHeight = %f",s1.height);
}

main()
{
	struct student s;
	
	printf("Enter Id  : ");
	scanf("%d",&s.id);
	
	printf("Enter name : ");
	scanf("%s",&s.name);
	
	printf("Enter Height : ");
	scanf("%f",&s.height);
	
	display(s);
	
}

