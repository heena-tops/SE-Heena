#include<stdio.h>

struct student 
{
	int id;
	float height;	
};

main()
{
	FILE * fp;
	struct student s1[2];
	int i;
	
	fp=fopen("Student_ST.txt","w");
	
	for(i=1;i<=2;i++)
	{
		fflush(stdin);
		printf("Enter height : ");
		scanf("%f",&s1[i].height);
		
		printf("Enter Id : ");
		scanf("%d",&s1[i].id);
		
		fprintf(fp,"Height = %f",s1[i].height);
		fprintf(fp,"Id = %d",s1[i].id);
	}
	
	fclose(fp);
}
