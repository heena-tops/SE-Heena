#include<stdio.h>

#include<string.h>

main()
{
	char str[100],temp,str1[100];
	int length=0,i;
	
	printf("Entre a string : ");
	gets(str);
	
	strcpy(str1,str);
	
	length = strlen(str);
	
	for(i=0;i!=length/2;i++)
	{
		temp=str[i];
		str[i] = str[length-1-i];
		str[length-1-i] = temp;
	}
	
	printf("\nReverse string is : %s",str);
	
	
	if(strcmp(str,str1)==0)
	{
		printf("\nString is Palindrom ");
	}
	else
	{
		printf("\nNot palindrom");
	}
}
