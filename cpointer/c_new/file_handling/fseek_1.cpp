//fseek() : use to join two lines in a file 

// Syntax : fseek(file_pointer,offset,whence)

#include<stdio.h>

main()
{
	FILE *fp;
	
	fp = fopen("Duck.txt","w");
	
	fprintf(fp,"Hello");
	
	fseek(fp,4,SEEK_END);
	
	fprintf(fp,"Good morning");
}
