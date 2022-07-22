#include<stdio.h>

main()
{
	int i=1;
	
	here : for(;i<=10;i++)
	{
		if(i==5)
		{
			printf("Hello\n");
			i++;
			goto here;
		}
		printf("%d\n",i);
	}
}
