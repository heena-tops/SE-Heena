#include<stdio.h>

main()
{
	
	FILE *f;
	char name[20];
	
	f = fopen("Hey.txt","w+");
	printf("Enter name : ");
	fgets("name",f);
	fputs("Good morning have a nice day !",f);
	fputs("\nHow are you ? ",f);
	fclose(f);
}
		
