#include<stdio.h>
main()
{
	int n1=0,n2=1,term,next;
	
	printf("Enter no of term for series : ");
	scanf("%d",&term);
	
	for(int i=0;i<term;i++)
	{
		printf("%d\t",n1);
		next = n1+n2;
		
		n1=n2;
		n2=next;
	}	
}
