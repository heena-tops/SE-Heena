//Union : a data type that store group of different type of values but share the same memory location
/*	union syntax:  
		
		union name
		{
			statements.....
	    };

*/

#include<stdio.h>

union bike{
	
	char c_name[20];
	int id;
	float weight;
};

main()
{
	union bike b;
	
//	printf("Enter bike company name : ");
//	scanf("%s",&b.c_name);
	
	printf("Enter bike id : ");
	scanf("%d",&b.id);
	
	
//	printf("Enter weight : ");
//	scanf("%f",&b.weight);
	
	printf("\n\n----------Display----------------\n\n");
	
//	printf("\nCompany name : %s",b.c_name);
	
	printf("\nId : %d",b.id);
	
//	printf("\nWeight : %.2f",b.weight);
}
