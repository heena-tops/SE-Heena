// if ... else ladder : use when want to check multiple conditions

/*

	Syntax : 
	
	if(condition1)
	{
		//statement
	}
	else if(condition 2)
	{
		//statement..
	}
	...
	...
	else
	{
		//statemnets....
	}

*/

#include<stdio.h>

main()
{
	int marks;
	
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks>=80 && marks<=100)
	{
		printf("A grade");
	}
	else if(marks>=60 & marks<80)
	{
		printf("B grade");
	}
	else if(marks>=40 && marks<60)
	{
		printf("C grade");
	}
	else
	{
		printf("FAIL !!!!");
	}
}
