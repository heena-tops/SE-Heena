// pointers arithmatic:

#include<stdio.h>
main(){
	int i=78;
	int *p1;
	p1=&i;
	
	printf("Value of i is = %d",*p1);	
	*p1=24;
	printf("\nValue after change = %d",*p1);
}
