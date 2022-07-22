// MENU driven Function

#include<stdio.h>
int add(int x, int y);
int sub(int s, int t);
int mul(int m ,int l);
int divi(int d, int v);

main()
{
	
	int a,b,choice;
	
	printf("\n\n--------------MENU----------------\n\n");
	printf("\n 1. Addition ");
	printf("\n 2. Substraction ");
	printf("\n 3. Multiplication ");
	printf("\n 4. Division ");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	
	printf("\n\nEnter two numbers : ");
	scanf("%d %d",&a,&b);
	
	if(choice==1)
	{
		add(a,b);
	}
	else if(choice==2)
	{
		sub(a,b);
	}
	else if(choice==3)
	{
		mul(a,b);
	}
	else if(choice==4)
	{
		if(b==0)
		{
			printf("\nZero division Error!!!");
		}
		else
		{
			divi(a,b);
		}
	}
	else
	{
		printf("\nInvalid Choice!!!");
	}
	
	
}

int add(int x, int y)
{
	printf("\nAddition of %d and %d is = %d",x,y,x+y);
}

int sub(int s, int t)
{
	printf("\nSubstraction of %d and %d is = %d",s,t,s-t);
}

int mul(int m, int l)
{
	printf("\nMultiplication of %d and %d is = %d",m,l,m*l);
}

int divi(int d, int v)
{
	printf("\nDivision of %d and %d is = %d",d,v,d/v);
}
