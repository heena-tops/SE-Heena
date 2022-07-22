//read array from file and display on the screen

#include<stdio.h>

main()
{
	int i;
	FILE * fp;
	
	fp=fopen("Array_file.txt","w");
	
	for(i=0;i<=10;i++)
	{
		putw(i,fp);
	}
	fclose(fp);
	
	
	fp=fopen("Array_file.txt","r");
	printf("Array Elements are : \n\n");
	
	for(i=0;i<=10;i++)
	{
		i=getw(fp);
		printf("%d\n",i);
	}
	fclose(fp);
}
