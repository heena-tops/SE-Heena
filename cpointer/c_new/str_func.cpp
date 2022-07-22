#include<stdio.h>
#include<string.h>

main()
{
	char str1[200],str2[200];
	int length;
	
	printf("Enter first string : ");
	gets(str1);
	
	printf("Enter second string : ");
	gets(str2);
	
	// strcmp() : to compare two strings
	
	if(strcmp(str1,str2)==0)
	{
		printf("Both are similar strings");
	}
	else
	{
		printf("Not a similar string");
	}
}
