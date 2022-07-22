//How to write in a file 

#include<stdio.h>

main()
{
	FILE *fp;
	int id,salary;
	char name[20];
	
	fp = fopen("Employee Data.text","w"); //append mode
	
	printf("Enter Id : ");
	scanf("%d",&id);
	fprintf(fp,"Id = %d",id);
	
	printf("Enter name : ");
	scanf("%s",&name);
	fprintf(fp,"\nName = %s",name);
	
	printf("Enter Salary : ");
	scanf("%d",&salary);
	fprintf(fp,"\nSalary = %d",salary);
	
	fclose(fp);
}

