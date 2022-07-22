//Array and function : function to add array elements

#include<stdio.h>

int sum(int a[])
{
	int sum=0,i;
	
	for(i=0;i<5;i++)
	{
		sum+=a[i];
	}
	
	return sum;
}

main()
{
	int a[]={12,23,21,54,34};
	
	printf("Addition os elements : %d",sum(a));	
}
