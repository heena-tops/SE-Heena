//how to take input from user

#include<stdio.h>

main()
{
	int a[10],i;
	
	printf("Enter elements : ");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n\n---------------------------------------\n\n");
	
	for(i=9;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
