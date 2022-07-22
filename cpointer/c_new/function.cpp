//Function : with return type & without parameter

#include<stdio.h>

int display(); // function declaraction


main()
{	
	display(); //calling a function
}

//function definition
int display()
{
	int a,b;
	
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	
	printf("\nAddition is : %d",a+b);
	return a+b;
}

