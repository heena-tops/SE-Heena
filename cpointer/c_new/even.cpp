#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter any character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			case 'e':
				case 'i':
					case 'o':
						printf("Vowel");
						break;
		default:
			printf("Invalid Input !!!!!");
			break;
	}
}
