//pointers : change value of variable using pointer

#include<stdio.h>

main()
{
	int a;
	
	int *p; // declaration of poinetr
	
	p = &a; // assign aaddress of a variable
	
	printf("Enter any value : ");
	scanf("%d",&a);
	
	*p=45; // change value pointed by pointer
	
	printf("Updated value : %d",a);
}
