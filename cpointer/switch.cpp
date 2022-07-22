#include<stdio.h>
main(){
	
	char input;
	
	printf("Enter any alphabet: ");
	scanf("%c",&input);
	
	switch(input){
		case 'A':
			printf("Vowels");
			break;
			case 'a':
				printf("Vowels");
				break;
			
		case 'E':
			printf("Vowels");
			break;
			
		case 'I':
			printf("Vowels");
			break;
			
		case 'O':
			printf("Vowels");
			break;
			
		case 'U':
			printf("Vowels");
			break;
			
		default:
			printf("Consonant !");
			break;
	}
}
