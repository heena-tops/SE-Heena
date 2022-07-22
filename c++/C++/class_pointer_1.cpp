//  Constructor : parameterised constructor

#include<iostream>
using namespace std;

class Student
{
	public:
	Student(string name, int age, float height) //parameterised constructor
	{
		cout<<"\nName : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Height : "<<height;
	}
	
};

main()
{
	string name;
	int age;
	float height;
	
	cout<<"Enter name : ";
	cin>>name;
	
	cout<<"Enter age : ";
	cin>>age;
	
	cout<<"Enter height : ";
	cin>>height;
	
	Student obj(name,age,height);
}
