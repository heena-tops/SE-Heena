#include<stdio.h>

main()
{
	int a1[2][3],a2[3][2],a3[2][2],sum=0;
	int i,j,k;
	
	printf("\n\n----------First Matrix ----------------\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a1[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n----------Second Matrix ----------------\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a2[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a3[i][j]=0;
			for(k=0;k<2;k++)
			{
				a3[i][j] += a1[i][k]*a2[k][j];
//				a3[i][j]=sum;
			}
//			sum=0;
		}
	}
	
	printf("\n\n---------------Result Matrix-----------------\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a3[i][j]);
		}
		printf("\n");
	}
}
