//Structure : 

/*

	Structure : 
	
	It is a user defined data type, which can store and retrive multiple
	type of data at a same time.
	
	it groups mutiple type of a data into a single type
	one can retrive all data at a time
	
	How to declare  a structure : 
	
		using keyword 'struct'
		
	Size of a structure : 
	
		-the size of structure is size addition of all 
		type of data type declare in a structure 
	
	Syntax : 
	
		struct structure_name
		{
			//diffrent type of data
		};
	
	ex: 
		
		struct Student
		{
			int id;
			char name[20];
			float height;
		};

*/

//array of a structure

#include<stdio.h>


struct Student
{
	int id;
	char name[20];
	float marks[3];	
};

main()
{
	struct Student s1[3];
	int i,j;
	
	for(j=0;j<3;j++)
	{
		printf("\nEnter Id = ");
		scanf("%d",&s1[j].id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(s1[j].name);
		
		for(i=0;i<3;i++)
		{
			printf("Enter marks : ");
			scanf("%f",&s1[j].marks[i]);
		}
	}
	printf("\n\n-----------------Display------------------------\n\n");
	
	
	for(j=0;j<3;j++)
	{
		printf("\nId = %d",s1[j].id);
		printf("\nName = %s",s1[j].name);
		
		for(i=0;i<3;i++)
		{
			printf("\nMarks = %.2f",s1[j].marks[i]);
		}
	}
}

