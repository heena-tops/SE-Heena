#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char name[100],str2[100];
	
	cout<<"Enter name : ";
	gets(name);
	
	cout<<"Enter name : ";
	gets(str2);
	
	cout<<strstr(name,str2);
}
