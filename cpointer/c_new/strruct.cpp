//Structure : 

/* 

	it's user defined data type.
	
	It can store multiple type of data 
	i.e. .....
	collection of elements of different type of data with in a single type

	It allow to access multiple type data at same time
	
	>> How to declare a structure :
	
		using 'struct' keyword
			
			ex: struct structure_name
				
				struct Student 
	
	Size of Structure : 
		
			the size of structure is size addition by all the elements
			
			i.e. : int, float, char 
			then size of structure would be ---->4(size int) + 4(size of float) + 1(size of character) = 9
	
*/

#include<stdio.h>

struct Student
{
	int age;
	float marks;
	char name[20];
};

main()
{
	struct Student S1;
	
	printf("Enter age : ");
	scanf("%d",&S1.age);
	
	printf("Enter marks : ");
	scanf("%f",&S1.marks);
	
	printf("Enter name : ");
	scanf("%s",&S1.name);
	
	printf("\n\n--------------display------------\n\n");
	
	printf("\nAge : %d",S1.age);
	printf("\nmarks : %f",S1.marks);
	printf("\nname : %s",S1.name);
}






















