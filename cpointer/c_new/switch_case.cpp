//for loop :
/*

	for loop is an entry control loop

	use to repeate loop at perticular number of times 
	
	Syntax : 
	
	for(initialization;condition;updateion)
	{
		//statements...
	}

*/

//How to take number input from user and make addition of them

#include<stdio.h>

main()
{
	int i,num,sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		sum+=num;
	}

	printf("Addition = %d",sum);
}



















