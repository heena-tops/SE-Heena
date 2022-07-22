// fread() and fwrite()

#include<stdio.h>

struct student
{
	int id;
	char name[20];	
};

main()
{
	struct student s1[3];
	FILE * fp;
	int i;
	
	fp=fopen("file_5.txt","w");
	
	for(i=1;i<=3;i++)
	{
		printf("Enter Id : ");
		scanf("%d",&s1[i].id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(s1[i].name);
	}
	fwrite(s1,sizeof(s1),1,fp);
	fclose(fp);
	
	fp=fopen("file_5.txt","r");
	
	fread(s1,sizeof(s1),1,fp);
	
	for(i=1;i<=3;i++)
	{
		printf("\n\nId = %d",s1[i].id);
		printf("\nName = %s",s1[i].name);
	}
	fclose(fp);
	
}
