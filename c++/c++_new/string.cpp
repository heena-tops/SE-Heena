//string palindrom

#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char str[100],temp,str1[100],temp1[100];
	int i,length=0;
	
	cout<<"Enter a string : ";
	gets(str);
	
	strcpy(temp1,str);
	
	length=strlen(str);
	
	for(i=0;i!=length/2;i++)
	{
		temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;
	}
	strcpy(str1,str);
	
	cout<<str1<<endl;
	
	if(strcmp(temp1,str1)==0)
	{
		cout<<"Palindrom";
	}
	else
	{
		cout<<"Not Palindrom";
	}
	
}
