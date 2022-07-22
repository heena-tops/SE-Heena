// structure union difference 

#include<stdio.h>

union Student
{
	int Id;
	char name[20];
	float height;
};

struct stu
{
	int Id;
	char name[20];
	float height;
};

main()
{
	union Student s1;
	struct stu s2;
	
	
	
	printf("Size of union : %d",sizeof(s1));
	printf("Size of Structure : %d",sizeof(s2));
}
