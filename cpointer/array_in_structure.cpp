//Array of structure

#include<stdio.h>

struct student{
	int id;
	char name[20];
	int marks[3];	
};

main()
{
	struct student s[3];
	int i,j;
	
	for(j=1;j<=3;j++)
	{
		printf("Enter id : ");
		scanf("%d",&s[j].id);
		
		fflush(stdin);
		
		printf("Enter name : ");
		scanf("%s",&s[j].name);
		
		for(i=1;i<=3;i++){
			printf("Enter marks of subject %d : ",i);
			scanf("%d",&s[j].marks[i]);
		}
		printf("\n\n--------------------------------\n\n");
	}
	
	printf("\n\n-------------Display--------------\n\n");
	
	for(j=1;j<=3;j++)
	{
		printf("\nYour id : %d",s[j].id);
		printf("\nYour name : %s",s[j].name);
		for(i=1;i<=3;i++){
			
			printf("\nYour marks of subject %d is : %d",i,s[j].marks[i]);
		}
	}
}
