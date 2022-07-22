#include<iostream>
#include<cstring>
using namespace std;

class A
{
	char name[20];
	int length;
	
	public :
	void input()
	{
		cout<<"Enter a name : ";
		gets(name);	
	}	
	
	void display()
	{
		length = strlen(name);
		cout<<"Length of string is : "<<length;
	}
};

main()
{
	A obj;
	
	obj.input();
	obj.display();
}
