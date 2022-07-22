#include<stdio.h>

main()
{
	int i,num,e_count=0,o_count=0,e_sum=0,o_sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			e_count+=1;
			e_sum+=num;
		}
		else
		{
			o_count+=1;
			o_sum+=num;
		}
	}
	
	printf("Total Even numbers : %d",e_count);
	printf("\nTotal Odd numbers : %d",o_count);
	
	printf("\n\n Sum of even numbers : %d",e_sum);
	printf("\n Sum of odd numbers : %d",o_sum);
}
