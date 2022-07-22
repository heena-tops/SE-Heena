// pointers arithmatic:

#include<stdio.h>
main(){
	int a[5],i,*p1;
	
	printf("Enter elements : ");
	for(i=0;i<5;i++){
		scanf("%d",a[i]);	
	}
	
	p1=&a[3];
	printf("%d",*p1);
	*p1++;
	printf("%d",*p1);
	
	
}
