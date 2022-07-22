#include<stdio.h>

main()
{

	int i,count=0;
	char s1[100],c;
	
	printf("Enter first string : ");
	gets(s1);
	
	printf("Enter character to know it's frequency : ");
	scanf("%c",&c);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(c==s1[i])
		{
			count++;
		}
	}
	
	printf("Frequency of %c is : %d",c,count);
}
