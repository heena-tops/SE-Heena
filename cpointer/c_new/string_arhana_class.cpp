#include<stdio.h>

main()
{
	char str[100];
	int i,v_count=0,d_count=0,c_count=0;
	
	printf("Enter a string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			continue;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d_count++;
		}
		else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			v_count++;
		}
		else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
	}
	
	printf("\n\ndigits : %d",d_count);
	printf("\nVowels: %d",v_count);
	printf("\nConsonants : %d",c_count);
}
