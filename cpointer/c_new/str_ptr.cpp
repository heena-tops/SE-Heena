//difference between structure and union

#include<stdio.h>

union Home
{
	int id;
	char city[20];
	float area;
};

struct car
{
	int c_id;
	char name[20];
	float weight;
};

main()
{
	union Home h1;
	
	struct car c1;

	printf("size of Union : %d",sizeof(h1));
	printf("\nsize of Struct : %d",sizeof(c1));	
}


























