// Function : Call by refence (values of actual parameter will change)

#include<stdio.h>

int swap(int *a, int *b) //formal parameter
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}

main()
{
	int a,b; // actual parameter
	
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	
	printf("\n Values before swap : %d %d",a,b);
	
	swap(&a,&b); //call by reference
	
	printf("\n Values after swap : %d %d",a,b);
} 
