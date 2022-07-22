//fseek() : use to merg two sentence in file

//Syntax : fseek(file_pointer,offset,whence)

#include<stdio.h>

main()
{
	FILE *fp;
	
	fp = fopen("Duck.txt","w");
	
	fprintf(fp,"This is Duck RELATE TO THE DOMAIN OF THE BIRDS");
	
	fseek(fp,2,SEEK_SET);
	
	fseek(fp,3,SEEK_CUR);
	
	fprintf(fp,"Duck is cute");
	
	fprintf(fp,"Hello");
	
	fclose(fp);
}

