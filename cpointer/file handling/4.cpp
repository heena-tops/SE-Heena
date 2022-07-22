#include<stdio.h>
main()
{
	FILE *p;
	char bfr[100];
	p=fopen("Duck.txt","r");
	fprintf(p,"This is Donald Duck!");
	
	while(fscanf(p,"%s",bfr)!=EOF){
		printf("%s ",bfr);
	}
	fclose(p);
}
