//Pointers : 

#include<stdio.h>

int main()
{
	int a=45;
	
	int *xyz;
	
	xyz = &a;
	*xyz=21; //changing value pointed by pointers
	
	printf("Value of a = %d",a);
	
	return 0;
}
