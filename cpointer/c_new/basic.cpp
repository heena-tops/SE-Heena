#include<stdio.h>

main()
{
	int sum=0,a[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Addition of array elements : %d",sum);
	
	printf("\n\n---------------------------------\n\n");
	
	for(int i=0;i<10;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
