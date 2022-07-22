// how to use fscanf

#include<stdio.h>

main()
{
	int bfr[222];
	
	FILE *fp;
	fp=fopen("Duck.txt","r");
	
	while(fscanf(fp,"%s",bfr)!=EOF)
	{
		printf(" %s",bfr);	
	}	
	
	fclose(fp);
}
