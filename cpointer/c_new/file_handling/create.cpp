// File Handling : 

/*

	File Handling in C Language ...
	
	use to create a file 
	to update a file 
	to read from a file 
	
	>>How to craete ?
	
		Syntax :
		
		data_type *file_pointer;
		
		
	ex : 
		
		FILE *fp;
		
		
	>>File Operations : 
	
		fopen() : to open or create any file
		fprintf() : to display any text to your file 
		fscanf() : to scan data from your file
		fread() : to read any file
		fwrite() : to write data into file
		fclose() : to close a file
		
	>>File Modes : 
	
		r : read only
		w : write and create only
		a : update and create only
		
		r+ : read and write
		w+ : read and write
		a+ : read and write
*/

// fread() and fwrite() 

#include<stdio.h>

struct Car
{
	int id;
	char type[20];
	float weigth;
};

main()
{
	
	FILE *fp;
	
	struct Car c1[3];
	
	fp = fopen("22_June.txt","w");
	
	for(int i=0;i<3;i++)
	{
		printf("Enter Car Id : ");
		scanf("%d",&c1[i].id);
		
		fflush(stdin);
		
		printf("Enter Car Type : ");
		scanf("%s",&c1[i].type);
		
		printf("Enter Car Weight : ");
		scanf("%f",&c1[i].weigth);
	}
	fwrite(c1,sizeof(c1),1,fp);
	fclose(fp);
		
	fp = fopen("22_June.txt","r");
	fread(c1,sizeof(c1),1,fp);
	
	for(int i=0;i<3;i++)
	{
		printf("\n\nId = %d",c1[i].id);
		printf("\nType = %s",c1[i].type);
		printf("\nWeight = %.3f",c1[i].weigth);
	}
	
	fclose(fp);
	
}





















