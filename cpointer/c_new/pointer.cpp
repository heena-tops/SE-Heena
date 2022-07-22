//pointer with array

#include<stdio.h>

main()
{
	int a=12;
	
	int *ptr;
	
	ptr=&a;
	
	*ptr=34; // change value using pointer
	
	printf("%d",a);
	
}
