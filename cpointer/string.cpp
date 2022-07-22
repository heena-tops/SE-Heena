#include <stdio.h>
#include<string.h>
main()
{
    char name[20];
    int i ;
        
    printf("\n Please Enter any String  :  ");
    gets(name);
        
    for(i=0;name[i]!='\0';i++){
    	printf("\n%c",name[i]);
	}
	
	printf("\nReverse of name is : %s",strrev(name));
}
