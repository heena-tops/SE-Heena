#include<stdio.h>
main(){
	
	int marks;
	
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks>80&&marks<=100){
		printf("\nA Grade ");
	}
	else if(marks>70&&marks<=80){
		printf("\nB Grade ");
	}
	else if(marks>60&&marks<=70){
		printf("\nC Grade ");
	}
	else if(marks>50&&marks<=60){
		printf("\nD Grade ");
	}
	else if(marks>40&&marks<=50){
		printf("\nE Grade ");
	}
	else{
		printf("\nFail!");
	}
	
}
