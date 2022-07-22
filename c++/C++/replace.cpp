//recursive function : a function tat call itself again and again in a single programe

#include<stdio.h>

int fact(int num)
{
	if(num<=1)
	{
		return 1;
	}
	
	return num*fact(num-1);
}

main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	printf("Factorial : %d",fact(n));
}
