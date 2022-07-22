// fwrite() and fread()

#include<stdio.h>

struct Student
{
	int Id;
	char name[20];
	float height;	
};

main()
{
	struct Student s1[3];
	int i;
	
	FILE * fp;
	fp=fopen("STU.txt","w");
	for(i=0;i<3;i++)
	{
		
	
		printf("Enter Id : ");
		scanf("%d",&s1[i].Id);
		
		fflush(stdin);
		
		printf("Enter Name : ");
		gets(s1[i].name);
		
		printf("Enter height : ");
		scanf("%f",&s1[i].height);
		
		
	}
	fwrite(s1,sizeof(s1),1,fp);
		
	fclose(fp);
	

	fp=fopen("STU.txt","r");
	
	fread(s1,sizeof(s1),1,fp);	
	for(i=0;i<3;i++)
	{
		
		
		printf("\n\n-----------------\n\n");
		
		printf("Id = %d",s1[i].Id);
		printf("\nName = %s",s1[i].name);
		printf("\nheight = %.2f",s1[i].height);
		
	}
	fclose(fp);
}
