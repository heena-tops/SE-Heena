//strings in c++
//strchr() : return the first occurance of character in string 1

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20],s2;
	
	cout<<"Enter name : ";
	gets(s1);
	
	cout<<"Enter any character : ";
	cin>>s2;
	
	cout<<"Final string : "<<strchr(s1,s2);
}
