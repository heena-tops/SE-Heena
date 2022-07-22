//Difference between structure and union
#include<stdio.h>
struct Student
{
	int id;
	char name;
	float weight;	
};

union Faculty
{
	int id;
	char name;
	float weight;
};

main()
{
	struct Student s1;
	union Faculty f1;
	
	printf("Size of Structure is : %d",sizeof(s1));
	printf("\nSize of Union is : %d",sizeof(f1));
}
