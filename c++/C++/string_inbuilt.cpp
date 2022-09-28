#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[30],str2;
	
	cout<<"Enter a string : ";
	gets(str1);
	
	cout<<"Enter a string : ";
	cin>>str2;
	
	cout<<"The ocurrance of second string in first : "<<strchr(str1,str2);
	
	return 0;
}
