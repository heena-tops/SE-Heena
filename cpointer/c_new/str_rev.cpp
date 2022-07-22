#include<stdio.h>

main()
{
	int a=10;
	
	int *p; 
	
	p=&a; 
	
	printf("Address before : %d",p);
	
	p++;
	
	printf("\nAddress after : %d",p);
}


