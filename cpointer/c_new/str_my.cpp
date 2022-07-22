#include<stdio.h>

main()
{
	char name[100];
	int i,sm=0,cp=0,sp=0;
	
	printf("Enter name : ");
	gets(name);
	
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]>='A'&&name[i]<='Z')
		{
			cp++;
		}
		else if(name[i]==' ')
		{
			sp++;
		}
		else
		{
			
			sm++;
		}
		
	}
	
	printf("\nCapitals : %d",cp);
	printf("\nSmall : %d",sm);
	printf("\nSpaces : %d",sp);
}
