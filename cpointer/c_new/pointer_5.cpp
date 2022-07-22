//pointers with array

#include<stdio.h>

main()
{
	int a[5]={2,1,3,5,3},i,sum=0;
	
	printf("Address of Array = %u",a);
	
	for(i=0;i<5;i++)
	{
		printf("\nvalue of a[%d] = %u",i,(a+i));
	}
	
}
