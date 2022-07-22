//Structure with pointer

#include<stdio.h>

struct student{
	int id;
	char name[20];
};

main()
{
	struct student s1,*ptr;

	ptr=&s1;
	
	printf("Enter id : ");
	scanf("%d",&(*ptr).id);
	
	printf("Enter name : ");
	scanf("%s",&(*ptr).name);
	
	printf("\n\n-------------Display------------\n\n");
	
	printf("Your id : %d",(*ptr).id);
	printf("\nYour name : %s",(*ptr).name);
	
}













