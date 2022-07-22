// fseek() : 

//syntax : fseek(file_pointer, offset, whence)

/*

SEEK_SET : 
SEEK_END : 
SEEK_CUR : 

*/

#include<stdio.h>

main()
{
	
	FILE * fp;
	
	fp=fopen("Duck.txt","w");
	
	fprintf(fp,"This is Duck");
	
	fseek(fp,5,SEEK_SET);
	
	fprintf(fp,"Duck is cute");
	
	fclose(fp);
}
