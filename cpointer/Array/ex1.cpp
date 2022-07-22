#include<stdio.h>

main()
{	
	int a[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n-----------Your Array----------\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
