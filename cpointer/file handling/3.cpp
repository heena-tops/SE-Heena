#include<stdio.h>
main()
{
	FILE *fp;
	char bfr[222];
	fp = fopen("ABC.txt","r");
	fprintf(fp,"Good Morning have a nice day ");
	
	while(fscanf(fp,"%s",bfr)!=EOF){
		printf("%s ",bfr);
	}
	fclose(fp);
}
