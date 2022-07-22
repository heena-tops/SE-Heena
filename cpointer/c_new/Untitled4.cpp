#include<stdio.h>
main()
{
	int i,f=1,num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		f*=i;
	}
	printf("Factorial : %d",f);
}
