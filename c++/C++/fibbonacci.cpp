//Fucntion : Call by Reference 

#include<stdio.h>

int swap(int *a, int *b)
{
	int temp;
	temp=*a;		// formal parameter
	*a=*b;		// formal parameter
	*b=temp;		// formal parameter
}

main()
{
	int a,b; //actual parameter
	
	printf("Enter two integers : ");
	scanf("%d %d",&a,&b);
	
	printf("\n Value befo
	swre swap : %d %d",a,b);
	ap(&a,&b);
	
	printf("\n Value after swap : %d %d",a,b);
}
