#include<stdio.h>
main()
{
	FILE *fp;
	char str[200];
	
	fp=fopen("Name.txt","r");
	
	if(fp=NULL)
	{
		printf("ERROR : File Doesn't exist !!!");
	}
	
	fscanf(fp,"%[^\n]",str);
	
	printf("Data from file : %s",str);
	
	fclose(fp);
}

//#include<stdio.h>

//int main()
//{
//    char c[1000];
//    FILE *fptr;
//
//    if ((fptr = fopen("Name.txt", "r")) == NULL)
//    {
//        printf("Error! opening file");
//        // exit from program if file pointer returns NULL.         
//    }
//
//    // read the text until newline 
//    fscanf(fptr,"%[^\n]", c);
//
//    printf("Data from the file:\n%s", c);
//    fclose(fptr);
//    
//    return 0;
//}
