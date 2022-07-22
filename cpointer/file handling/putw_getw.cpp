// getw & putw

#include<stdio.h>

main()
{
	FILE * fp;
	int i,num[10];
	
	fp=fopen("File.txt","w");
	for(i=1;i<=10;i++)
	{
		printf("Enter number : ");
		scanf("%d",&num[i]);
		putw(num[i],fp);
	}
	fclose(fp);
	
	fp=fopen("File.txt","r");
	
	for(i=1;i<=10;i++)
	{
		num[i]=getw(fp);
		printf("%d\n",num[i]);
	}
	fclose(fp);
}
