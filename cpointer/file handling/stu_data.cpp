#include<stdio.h>

main()
{
	FILE * fp;
	int num,i,id,marks;
	char name[20];
	
	fp=fopen("Stu.txt","a+");
	
	printf("How many students are there in your class ? ");
	scanf("%d",&num);
	
	fprintf(fp,"\n\n--------------Student Details---------------\n\n");
	
	for(i=0;i<num;i++)
	{
		printf("\n\nEnter Id : ");
		scanf("%d",&id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		gets(name);
		
		printf("Enter Marks : ");
		scanf("%d",&marks);
		
		fprintf(fp,"\n\nId = %d",id);
		fprintf(fp,"\nName = %s",name);
		fprintf(fp,"\nMarks = %d",marks);
	}
}
