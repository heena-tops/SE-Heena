/*
	inheritance : it means to inherit the
	properties of the parant class into a child class
	
	types of inheritance:
	
	1) single level inheritance
	2)multi-level inheritance
	3)multi-ple inheritance 
	4)hierarchical inheritance
	5)hybride inheritance 
*/

// 1) single level inheritrance 

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

class B : public A
{
	public:
	void displayB()
	{
		cout<<"\nThis is class B";	
	}
};

main()
{
	B obj;
	
	obj.displayA();
	obj.displayB();
}
