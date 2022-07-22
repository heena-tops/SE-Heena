#include<stdio.h>

main()
{
	int i,j,k,a1[2][2],a2[2][2],a3[2][2];
	
	printf("\n\n-------------Matrix: 1-------------\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&a1[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n-------------Matrix: 2-------------\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&a2[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n-------------Multiplication Matrix------------\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a3[i][j]=0;
			for(k=0;k<2;k++)
			{
				a3[i][j]+=a1[i][k]*a2[k][j];
			}
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a3[i][j]);
		}
		printf("\n");
	}
}
