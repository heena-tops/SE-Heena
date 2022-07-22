#include<iostream>
using namespace std;

class student
{
	int id,i;
	char name[20];
	int marks[3];
	
	public:
	void input(){
		
		cout<<"\n\nEnter id : ";
		cin>>id;
		
		fflush(stdin);
		
		cout<<"\nEnter Name : ";
		gets(name);
		
		for(i=0;i<3;i++){
			cout<<"\nEnter marks : ";
			cin>>marks[i];
		}
	}
	
	void display(){
		cout<<"\n\n--------------Display info. -------------------------\n\n";
		cout<<"\nId = "<<id;
		cout<<"\nName = "<<name;
		for(i=0;i<3;i++){
			cout<<"\nMarks = "<<marks[i];
		}
	}
};

main()
{
	student obj[3];
	for(int i=0;i<3;i++){
		obj[i].input();
		obj[i].display();
	}
}
