#include<stdio.h>
main()
{
	FILE *file;
	file = fopen("Hello.txt","r");
	fprintf(file,"Hello welcome");
	fclose(file);
}

//
//	file = fopen("Hello","w+");
//	fputs("Good morning have a nice day !",file);
//	fputs("\nHow are you ? ",file);
//	fclose(file);
