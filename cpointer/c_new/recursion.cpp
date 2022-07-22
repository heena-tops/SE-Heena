#include<stdio.h>

int fact(int a)
{
	if(a<=1)
	return 1;
	
	return a*fact(a-1); // recursive function
}

main()
{
	int num;
	
	printf("Enter a number to find factorial : ");
	scanf("%d",&num);
	
	printf("Factorial of %d is : %d",num,fact(num));
}

