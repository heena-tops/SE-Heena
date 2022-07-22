//function : recursive function

#include<stdio.h>
int factorial(int num)
{
	if(num<=1)
	return 1;
	
	return num*factorial(num-1);
}

main()
{
	int n;
	
	printf("Enter number to find factorial : ");
	scanf("%d",&n);
	
	printf("Factorial : %d",factorial(n));
}
