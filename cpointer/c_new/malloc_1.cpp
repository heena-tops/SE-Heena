#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,n;
	int *p;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	p=(int*)malloc(n*2);
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	free(p);
}
