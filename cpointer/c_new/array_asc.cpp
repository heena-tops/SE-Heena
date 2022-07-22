#include<stdio.h>

main()
{
	int i,a[3],temp=0;
	
	for(i=0;i<3;i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d\n",a[i]);
	}
}
