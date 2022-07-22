//how to make addition of numbers which are entered by user

#include<stdio.h>

main()
{
	int i,num,sum=0;
	
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num);
		
		sum+=num;
	}
	printf("Sum of all numbers : %d",sum);
}
