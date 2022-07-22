//Fucntion : Using Recursion

#include<stdio.h>

int fac(int num)
{
	if(num<=1)
	return 1;
	
	return num*fac(num-1);
}

main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	
	printf("factorial of num: %d",fac(num));
}
