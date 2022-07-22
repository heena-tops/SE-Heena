#include<iostream>
using namespace std;

class Student
{
	int id;
	char name[100];
	
	public:
	void input()
	{
		cout<<"Enter id : ";
		cin>>id;
		
		fflush(stdin);
		
		cout<<"Enter name : ";
		gets(name);
	}
	
	void Display()
	{
		cout<<"\n Id = "<<id;
		cout<<"\n Name = "<<name;                       
	}
};

main()
{
	Student obj;
	obj.input();
	obj.Display();
}
