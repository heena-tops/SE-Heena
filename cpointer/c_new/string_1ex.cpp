//string : 

#include<stdio.h>

main()
{
	char a[20]; 
	int i,dcount=0;
	
	printf("Enter string : ");
	gets(a);
	
	//to count characters in a string 
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			dcount++;
		}
	}
	printf("\nLength of the string is : %d",dcount);
}
