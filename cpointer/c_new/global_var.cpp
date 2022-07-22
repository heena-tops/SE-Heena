#include<stdio.h>
#define pi 3.14 // global variable

void display()
{
	printf("Value of PI = %f\n\n",pi);
}

main()
{
	int r=2; // local variable
	float area;
	
	area = 2*pi*r;
	
	display();
	
	printf("Area of a circle : %f",area);
}
