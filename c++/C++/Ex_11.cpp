#include<iostream>
using namespace std;

class Faculty
{
	int id;
	char name[100];
	
	public: 
	Input(){
		cout<<"Enter id : ";
		cin>>id;
		
		fflush(stdin);
		
		cout<<"Enter name : ";
		gets(name);	
	}
	
	Display(){
		cout<<"\n Id = "<<id;
		
		cout<<"\n Name = "<<name;
	}
	
};

main()
{
	Faculty obj;
	obj.Input();
	obj.Display();
}
