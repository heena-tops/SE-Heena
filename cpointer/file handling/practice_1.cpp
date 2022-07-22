// use of fwrite and fread

#include<stdio.h>

struct Student
{
	int Id;
	char name[20];
	float height;	
};

main()
{
	struct Student s1[3],s2[3];
	int i;
	
	FILE *fp;
	
	fp=fopen("Struct_array_file.txt","w");
	
	for(i=0;i<3;i++)
	{
		printf("\n\nEnter Id : ");
		scanf("%d",&s1[i].Id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(s1[i].name);
		
		printf("Enter height : ");
		scanf("%f",&s1[i].height);
	}
	fwrite(s1,sizeof(s1),1,fp);
	
	fclose(fp);
	
	fp=fopen("Struct_array_file.txt","r");
	
	fread(s2,sizeof(s2),1,fp);
	
	for(i=0;i<3;i++)
	{
		printf("\n\n----------------------------\n\n");
		printf("Id = %d\n",s1[i].Id);
		printf("Name = %s\n",s1[i].name);
		printf("Height = %.2f\n",s1[i].height);
	}
}
