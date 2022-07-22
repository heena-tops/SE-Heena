#include<stdio.h>

main()
{
	
	int id[3],marks[3],i;
	char name[3][20];
	
	
	FILE *f;
	
	f=fopen("Student.txt","w+");
	
	if(f==NULL)
	{
		printf("File doesn't exist!!\n");
	}
	
	for(i=0;i<3;i++)
	{

		printf("Enter ID : ");
		scanf("%d",&id[i]);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(name[i]);
		
		printf("Enter marks : ");
		scanf("%d",&marks[i]);
		
		printf("\n\n------------------------------------\n\n");
		
	}
	
	for(i=0;i<3;i++)
	{
		
		fprintf(f,"\n Id = %d",id[i]);
		fprintf(f,"\n Name = %s",name[i]);
		fprintf(f,"\n Marks = %d",marks[i]);
	
	}
}
