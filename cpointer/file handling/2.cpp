#include<stdio.h>
main()
{
	FILE *fp;
	char bfr[211];
	fp=fopen("Hana.txt","r");
	//read a file
	while(fscanf(fp,"%s",bfr)!=EOF){
		printf("%s ",bfr);
	}
	fclose(fp);
}
