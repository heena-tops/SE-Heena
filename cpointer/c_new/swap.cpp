//change value of two variables without third variable 

#include<stdio.h>

main()
{
	char name[10];
	int s1,s2,s3,s4,s5;
	float per,avg,sum;
	
	printf("Enter name: ");
	scanf("%s",&name);
	
	printf("Enter five sub marks : ");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	
	sum=s1+s2+s3+s4+s5;
	
	avg=sum/5;
	
	per = (sum/500)*100;
	
	
	printf("\n\n-------------Details-----------------\n\n");
	
	printf("Name = %s",name);
	printf("\nTotal = %f",sum);
	printf("\navg=%f",avg);
	printf("\nper=%.2f",per);
	printf("%");
}
