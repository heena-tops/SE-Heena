//factorial of a number:

#include<stdio.h>

main()
{
	int i,num,f=1;
	
	printf("Enter a number to find factorial of it : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		f*=i;
	}
	
	printf("Factorial of %d is : %d",num,f);
}
