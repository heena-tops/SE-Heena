#include<stdio.h>

main()
{
	int a[10],i,j;
	
	printf("Enter ten numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++);
		{
			if(a[i]>a[j+i])
			{
				a[j+i]=a[i];
				printf("%d",a[i]);
			}
		}
	}
}
