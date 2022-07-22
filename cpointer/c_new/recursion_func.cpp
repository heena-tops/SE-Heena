// Recursion : to call itself again and again 

//recursive function : a function that it self again and again in a programe

#include<stdio.h>

int sum(int num)
{
	if(num%2==0 && num>=2)
	{
		return num+sum(num-2);
	}
	return 0;
}

main()
{
	int n;
	
	printf("Enter a number to find factorial : ");
	scanf("%d",&n);
	
	printf("sum of even numbers is : %d",sum(n));
}
