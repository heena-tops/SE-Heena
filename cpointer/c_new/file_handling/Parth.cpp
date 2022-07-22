//how to read from a file using fscanf()

#include<stdio.h>

main()
{
	FILE *fp;
	char apple[210];
	
	fp = fopen("Parth.txt","r");
	
	while(fscanf(fp,"%s",apple)!=EOF)
	{
		printf("%s ",apple);
	}
	
	fclose(fp);
}
