//find the largest among three numbers
#include<stdio.h>

main()
{
	int i;
	
	printf("Enter number between 1 to 7 : ");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		default:
			printf("Invalid number !!!");
			break;
	}
}
