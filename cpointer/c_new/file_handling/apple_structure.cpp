//take input as structure and store using fwrite()

#include<stdio.h>

struct apple
{
	int qty;
	char color[20];
};

main()
{
	struct apple a1[2],a2[2];
	
	int i;
	FILE * fp;
	
	
	fp = fopen("Apple_one.txt","w+");
	
	for(i=0;i<2;i++)
	{
		printf("Enter Quantity : ");
		scanf("%d",&a1[i].qty);
		
		printf("Enter color : ");
		scanf("%s",a1[i].color);
	}
	
	fwrite(a1,sizeof(a1),1,fp);

	
	fread(a2,sizeof(a2),1,fp);
	for(i=0;i<2;i++)
	{
		printf("\nQuantity : %d",a1[i].qty);
		printf("\nColor : %s",a1[i].color);
	}
	
	fclose(fp);
}
