#include<stdio.h>
main()
{
	int a[5]={34,67,23,89,38};
	int *p;
	
	p=&a[3];
	
	printf("3rd value is %d",*p);
	p++;
	printf("\nNext value is %d",*p);
}
