//strings in c

#include<stdio.h>

main()
{
	int counter=1,i;
	char st[20];
	
	printf("Enter a string : ");

	gets(st);
	
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]==' ' && st[i+1]!='\0')
		{
			counter++;
		}
	}
	printf("\nTotal character in this string is : %d",counter);
}
