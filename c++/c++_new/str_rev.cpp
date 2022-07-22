#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char str[100];
	
	cout<<"Enter a string : ";
	gets(str);
	
	int len=strlen(str);
	
	for(int i=len-1;i>=0;i--)
	{
		cout<<str[i];
	}
}
