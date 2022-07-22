//programe to check number is valid or invalid ? 

#include<stdio.h>

main()
{
	int a;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	if(a>=0 && a<=100)
	{
		printf("Valid number");
	}
	else
	{
		printf("Invalid number !!!");
	}
}
