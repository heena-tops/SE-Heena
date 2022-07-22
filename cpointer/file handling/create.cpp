//how to use fscanf() fucntion ---->  

#include<stdio.h>

main()
{
	
	FILE *f;
	char bfr[200];
	
	f=fopen("My_file.txt","r");
	fprintf(f,"Welcome Jaimin");
	
	while(fscanf(f,"%s",bfr)!=EOF)
	{
		printf("%s ",bfr); 
	}
	
	fclose(f);
}
