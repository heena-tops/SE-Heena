#include<stdio.h>
main()
{
	int i,j,row;
	
	printf("Enter rows : ");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
}
