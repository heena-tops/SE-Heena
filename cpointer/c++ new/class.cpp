//how to access two different class with two different objects in maion function

#include<iostream>
using namespace std;

class A
{
	public:
	void displayA()
	{
		cout<<"This is class A";
	}
};

class B 
{
	public:
	void displayB()
	{
		cout<<"\nThis is class B";	
	}
};

main()
{
	A obj1;
	B obj2;
	
	obj1.displayA();
	obj2.displayB();
}
