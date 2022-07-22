// Function w return type w parameter

#include<stdio.h>

float divi(float a, float b)
{
	if(b==0)
	return 0;
	
	return a/b;
}

main()
{	
	float num1,num2;
	
	printf("Enter two number to find division: ");
	scanf("%f %f",&num1,&num2);
	
	printf("Division is : %.3f",divi(num1,num2));
}

