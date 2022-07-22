//Function : without return type & with parameter

//find the Largest among three numbers 

#include<stdio.h>



main()
{
	int num,i,f=1;
	
	printf("Enter a number to find fcatorial : ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
		f*=i;
	}
	printf("factorial : %d",f);
}

