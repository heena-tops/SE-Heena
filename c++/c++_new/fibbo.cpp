#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char s1[20],s2[20];
	
	cout<<"Enter string : ";
	gets(s1);
	
	cout<<"Enter a string : ";
	gets(s2);
	
	cout<<"Ans = "<<strstr(s1,s2);
}
