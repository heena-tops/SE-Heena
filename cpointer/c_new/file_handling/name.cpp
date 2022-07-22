//File handling : 

/*

	File handling used to manage file such as to create 
	,to insert data into a file, to retrive data from a file
	using c language
	
	How to declare a file in C :
		- use file pointer to declare a file
		
		- data type to declare a file "FILE"
	
		Syntax : FILE *file_pointer;
		
		ex : FILE *fp;
	
	
	Operations:
	
	fopen() : to open a file
	fprintf() : to add data into a file
	fclose() : to close a file 
	fseek() : 
	fscanf() : 
	etc....
	
	
	File Mode :
	
	r : to read from file
	w : to write data into a file
	a : to append data into a file
*/


//how to take input from user and store it into a file

#include<stdio.h>

main()
{
	FILE * fp;
	char name[20];
	
	fp = fopen("Name.txt","w");
	
	printf("Enter Name : ");
	gets(name);
	
	fprintf(fp,"Name = %s",name);
	
	fclose(fp);
}
