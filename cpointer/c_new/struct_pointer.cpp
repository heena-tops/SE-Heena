//file handling :

/*
	How to declare any file ?
	
	to declar any file you need to use 'FILE' as data type
	You have to declar file pointer
	
		Syntax : FILE *fp; 
 
	file mode:
	
	r : read mode
	w : write mode
	a : append mode
	
	file operation :
	
	open file: fopen()
	close :	fclose()
	write : fwrite()
	print : fprintf()		
*/

#include<stdio.h>

//to create a file in c

main()
{
	FILE * fp;
	=
	fp = fopen("File.txt","w");
	
	fclose(fp);
}










