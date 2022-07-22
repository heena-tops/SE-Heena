#include<stdio.h>
#include<string.h> // header file must be include to use inbuilt string functions

main()
{
	char str1[20],str2[20];
	
	// strcpy() : this function is used to copy one string to another
	
	printf("Enter a string : ");
	gets(str1);
	puts(str1);
	
	printf("Enter a string : ");
	gets(str2);
	puts(str2);
	
	strcpy(str1,str2);
	
	printf("final string is : %s",str1);
}
