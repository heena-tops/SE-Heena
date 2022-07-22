//pointers with array

#include<stdio.h>

main()
{
	int a[5]={2,1,3,5,3},i,sum=0;
	 
	for(i=0;i<5;i++)
	{
		printf("\nvalue of a[%d] = %d",i,*(a+i));
		sum += *(a+i);
	}
	
	printf("\n\nAddition : %d",sum);
}
