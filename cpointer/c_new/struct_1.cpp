//structure union size difference

#include<stdio.h>

union Car
{
	int id;
	char name[20];
	float weight;
};

struct my
{
	int m_id;
	char m_name[20];
	float m_weight;
};

main()
{
	union Car c1;
	
	struct my m1;
	
	printf("Size of Union : %d",sizeof(c1));
	printf("\nSize of Structure : %d",sizeof(m1));	
}



