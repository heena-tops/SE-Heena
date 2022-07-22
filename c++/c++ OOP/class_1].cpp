
#include<iostream>
using namespace std;

class Student
{
	int id;
	char name[20];
	int marks;
	
	public:
	void input()
	{
		cout<<"Enter id : ";
		cin>>id;
		
		fflush(stdin);
		
		cout<<"Enter name : ";
		cin>>name;
		
		cout<<"Enter marks : ";
		cin>>marks;
		
	}
	
	void display()
	{
		cout<<"\n\n-----------Display----------\n\n";
		cout<<"id : "<<id;
		
		cout<<"\nName : "<<name;
		
		cout<<"\nMarks : "<<marks;
		
	}
};

main()
{
	Student obj;
	
	obj.input();
	
	obj.display();
}
