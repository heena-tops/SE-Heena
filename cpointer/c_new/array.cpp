//Array : 2-D array 

#include<stdio.h>

main()
{
	int a[2][2],i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n---------Matrix-------------\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}
