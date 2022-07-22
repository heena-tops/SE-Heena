//Structure within satructure

#include<stdio.h>

struct model_id
{
	int id;
};

struct type
{
	char v_type[20];
	float weight;	
};

struct specification
{
	struct model_id mi;
	
	struct type t;
	
	char c_name[20];
};

main()
{
	struct specification s;
	
	printf("Enter model id : ");
	scanf("%d",&s.mi.id);
	
	fflush(stdin);
	
	printf("Enter vehicle type : ");
	scanf("%s",&s.t.v_type);
	
	fflush(stdin);
	
	printf("Enter vehicle weight : ");
	scanf("%f",&s.t.weight);
	
	printf("Enter vehicle company name : ");
	scanf("%s",&s.c_name);
	
	printf("\n\n-------------Display Info -------------------\n\n");
	
	printf("\nModel id : %d",s.mi.id);
	printf("\nVehicle type : %s",s.t.v_type);
	printf("\nVehicle weight : %.2f",s.t.weight);
	printf("\nVehicle company name : %s",s.c_name);
}
