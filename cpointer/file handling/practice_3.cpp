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
	
	fp = fopen("Students.txt","w");
	
	for(i=0;i<3;i++)
	{
		printf("Enter Id : ");
		scanf("%d",&s1[i].Id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(s1[i].name);
		
		printf("Enter height : ");
		scanf("%f",&s1[i].height);
	}	
	
	fwrite(s1,sizeof(s1),1,fp);
	fclose(fp);
	
	fp=fopen("Students.txt","r");
	
	fread(s1,sizeof(s1),1,fp);
	
	for(i=0;i<3;i++)
	{
		printf("\n\nId = %d\n",s1[i].Id);
		printf("Name = %s\n",s1[i].name);
		printf("Height = %.2f\n",s1[i].height);
	}
	fclose(fp);
}
