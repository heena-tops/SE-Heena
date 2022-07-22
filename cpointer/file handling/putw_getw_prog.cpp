#include<stdio.h>
main()
{
	FILE * fp;
	int i,Id,marks;
	char name[20];
	
	fp=fopen("file_7.txt","w");
	
	for(i=0;i<3;i++)
	{
		printf("Enter Id : ");
		scanf("%d",&Id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(name);
		
		printf("Enter marks : ");
		scanf("%d",&marks);
		
		fprintf(fp,"\n\nId = %d",Id);
		fprintf(fp,"\nName = %s",name);
		fprintf(fp,"\nMarks = %d",marks);
	}
	
	
	fclose(fp);
}
