#include<stdio.h>

main()
{
	int a1[2][2],a2[2][2];
	
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a2[i][j]);
		}
	}
	
	printf("\n\n-----------Matrix 1 -------------\n\n");
	
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			printf(" %d ",a1[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n\n-----------Matrix 2 -------------\n\n");
	
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			printf(" %d ",a2[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n\n-----------Final Matrix-------------\n\n");
	
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			printf(" %d ",a1[i][j]+a2[i][j]);
			
		}
		printf("\n");
	}
}
