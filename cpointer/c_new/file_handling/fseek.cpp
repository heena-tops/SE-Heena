//fseek() : when to join two lines in a file

// fseek(file_pointer,offset,whence)

#include<stdio.h>

main()
{
	FILE *fp;
	
	fp=fopen("Applee.txt","w");
	
	fprintf(fp,"Hello");
	
	fseek(fp,2,SEEK_END);
	
	fprintf(fp,"Good morning");
	
	fclose(fp);
}
