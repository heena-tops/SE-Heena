#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)   
	{
		for(int c=1;c<=i;c++)
		{
			printf("*");
		}
		
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		
		for(int c=1;c<=i;c++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
