//pointers :

#include<stdio.h>
main(){
	int i;
	int *ptr;
	ptr=&i;
	
	printf("Enter a number :");
	scanf("%d",&i);
	
	printf("Value of i is = %d",*ptr);
	printf("\nAddress of i is = %p",ptr);
}
