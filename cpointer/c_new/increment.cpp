//count How many even and odd numbers are there

#include<stdio.h>

int main()
{
	int i,num,e_count=0,o_count=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		
		if(num%2==0)
		{
			e_count++;
		}
		else
		{
			o_count++;
		}
	}
	
	printf("Total Even numbers : %d",e_count);
	printf("\nTotal Odd numbers : %d",o_count);

	return 0;
}
