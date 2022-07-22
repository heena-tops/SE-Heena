#include <stdio.h>
 
int main () {
	
	int i=1;
	
	here:for(;i<11;i++){
		if(i==7){
			i++;
			printf("\nHello");
			goto here;
		}
		printf("\n%d",i);
	}
}
