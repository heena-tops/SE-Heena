#include<stdio.h>

main()
{
	int num;
	
	printf("How many elements do you want ? ");
	scanf("%d",&num);
	
	int a[num];
	for(int i=0;i<num;i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
}
