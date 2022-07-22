#include<stdio.h>
#include<string.h>
main()
{
	int id,salary;
	char name[20];
	
	FILE * fp;
	fp=fopen("Employee.txt","a+");
	
	if(fp==NULL){
		printf("file deosn't exist !\n'");
	}
	
	printf("Enter id : ");
	scanf("%d",&id);
	fflush(stdin);
	
	printf("Enter name : ");
	gets(name);
	
	printf("Enter Salary : ");
	scanf("%d",&salary);
	
	fprintf(fp,"\nEmployee Id = %d",id);
	fprintf(fp,"\nEmployee Name = %s",name);
	fprintf(fp,"\nEmployee Salary = %d\n\n",salary);
}
