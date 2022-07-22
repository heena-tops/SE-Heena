// array of class
#include<iostream>
using namespace std;

class student
{
	int id;
	char name[20];
	int marks[3];
	
	public:
	void input(){
		cout<<"\n\n Enter id : ";
		cin>>id;
		
		fflush(stdin);
		
		cout<<"\n Enter name : ";
		cin>>name;
		
		for(int i=0;i<3;i++){
			cout<<"\nEnter marks : ";
			cin>>marks[i];
		}
	}
	
	
	void display(){
		cout<<"\n\n id = "<<id;
		cout<<"\n name = "<<name;
		for(int i=0;i<3;i++){
			cout<<"\n marks = "<<marks[i];
		}
	}	
};

main()
{
	student obj[3]; //array of an object
	
	for(int i=0;i<3;i++){
		obj[i].input();
	}
	
	cout<<"\n----------------Display-------------\n";
	
	for(int i=0;i<3;i++){
		obj[i].display();
	}
	
}
