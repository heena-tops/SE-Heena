//Structure:
/*
	It's a data type which store group of different type of value 
	
	Synatx:
		
		struct structure_name
		{
			//define your data types...
		};
*/

#include<stdio.h>

struct Student{
	
	int id;
	char name[20];
	float marks; 
};

main()
{
	struct Student s1;
	
	printf("Enter your id = ");
	scanf("%d",&s1.id);
	
	printf("Enter your name = ");
	scanf("%s",&s1.name);
	
	printf("Enter your marks = ");
	scanf("%f",&s1.marks);
	
	printf("\n\n-----------------Display info.--------------------\n\n");
	
	printf("\nyour id = %d",s1.id);
	printf("\nyour name = %s",s1.name);
	printf("\nyour marks = %.3f",s1.marks);
}
