//String : How to take input from user

#include<stdio.h>

main()
{
	char name[20];
	int length=0,i;
	
	printf("Entre name here : ");
	gets(name); //to scan the string
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			continue;
		}
		length++;
	}
	
	printf("\nLength of string is : %d",length);
}
