// How to deal with array structure in file handling using fwrite() and fread()

/*

	fwrite() : use to add structure into a file
	
	fread() : use to read structure from a file


*/

#include<stdio.h>

struct Student
{
	int Id;
	char name[20];	
};

main()
{
	FILE * fp;
	struct Student s1[2];
	
	fp = fopen("Duck.txt","w");
	
	for(int i=0;i<2;i++)
	{
		printf("Enter Id : ");
		scanf("%d",&s1[i].Id);
		
		fflush(stdin);
	
		printf("Enter Name : ");
		gets(s1[i].name);
	}
	fwrite(s1,sizeof(s1),1,fp);
	
	fclose(fp);
	
	fread(s1,sizeof(s1),1,fp);
	fp = fopen("Duck.txt","r");
	
	for(int i=0;i<2;i++)
	{
		printf("Id = %d",s1[i].Id);
		printf("\nName = %s",s1[i].name);
	}
	
	fclose(fp);
}
