//structure within structure

#include<stdio.h>
struct Date
{
	int dd,mm,yyyy;	
};

struct student
{
	int id;
	char name[20];
	float marks;
	
	struct Date dob;	
};

main()
{
	struct student s1;
	
	printf("Enter your id = ");
	scanf("%d",&s1.id);
	
	printf("Enter your name = ");
	scanf("%s",&s1.name);
	
	printf("Enter Date of birth : ");
	printf("\nEnter day : ");
	scanf("%d",&s1.dob.dd);
	printf("Enter month : ");
	scanf("%d",&s1.dob.mm);
	printf("Enter year : ");
	scanf("%d",&s1.dob.yyyy);
	
	printf("Enter your marks = ");
	scanf("%f",&s1.marks);
	
	
	
	printf("\n\n-----------------Display info.--------------------\n\n");
	
	printf("\nyour id = %d",s1.id);
	printf("\nyour name = %s",s1.name);
	printf("\nyour marks = %.3f",s1.marks);
	printf("\nyour date of birth = %d-%d-%d",s1.dob.dd,s1.dob.mm,s1.dob.yyyy);
}
