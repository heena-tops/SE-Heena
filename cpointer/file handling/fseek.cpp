//	fseek()

#include<stdio.h>
main()
{
	FILE *fp;
	
	fp=fopen("file.txt","w+");
	
	fputs("Hello Hi",fp);
	
	// Syntax : fseek(file_pointer,offset,whence);
	
	fseek(fp,6,SEEK_SET);
	
	fputs("Good morning",fp);
}
