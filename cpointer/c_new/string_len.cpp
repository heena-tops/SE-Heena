//Structure : 

/*

	Structure is a user-defined data type 
	which can store multiple type of value togather within a single data type
	
	also one can retrive all data type at a time from the structure
	
	
	--- always define above to main function
	
	How to declare a structure ? 
	
		'struct' keyword use to declare a structure
	
	Syntax : 
	
	struct Student
	{
		//data...
	};

*/

#include<stdio.h>

struct Student
{
	int Id;
	char name[20];
	float height;
};

main()
{
	struct Student s1;
	
	printf("enter Id : ");
	scanf("%d",&s1.Id);
	
	fflush(stdin);
	
	printf("Enter Name : ");
	gets(s1.name);
	
	printf("Enter Height : ");
	scanf("%f",&s1.height);
	
	
	printf("\n\n-------------Display-------------\n\n");
	
	
	printf("Id = %d\n",s1.Id);
	printf("Name = %s\n",s1.name);
	printf("Height : %.2f",s1.height);
}
