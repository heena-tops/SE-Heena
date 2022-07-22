//how to creatre a file

#include<stdio.h>

main()
{
	FILE * p;
	char box[200]; 
	
	p=fopen("1st_file.txt","w");  
	
	fprintf(p,"Hello there");
	
	fseek(p,6,SEEK_CUR);  // fseek() : Syntax : fseek(file_pointer,offset, whence)
	
	// fseek has three whence : 
	/*	
		
		SEEK_SET : set pointer to any position of first msg you want
		SEEK_CUR : set pointerb to currunt position
		SEEK_END : set pointer to the end of the msg
		
	*/
	
	fprintf(p,"Hope you are well");
	
	fclose(p); 
}
