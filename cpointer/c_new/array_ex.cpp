//Array : Array with functions 

#include<stdio.h>

int sum(int b[])
{
	int add=0;
	for(int i=0;i<10;i++)
	{
		add+=b[i];
	}
	
	return add;
}

main()
{
	int a[10],b[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(int j=0;j<10;j++)
	{
		printf("Enter element %d : ",j+1);
		scanf("%d",&b[j]);
	}
	
	printf("\nAddition of A : %d",sum(a));
	
	printf("\nAddition of B : %d",sum(b));
}
