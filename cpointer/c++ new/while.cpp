#include<stdio.h>

main()
{
	int i=1;
	
	my_label:
	for(;i<=10;i++)
	{
		if(i==3)
		{
			i++;
			printf("\nHello");
			goto my_label;
		}
		printf("\n%d",i);	
	}	
}
