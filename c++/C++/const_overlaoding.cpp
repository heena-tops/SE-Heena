//polymorphism : 

//Types of polymorphism : 
/*

1. compile time polymnorphism : (over loading)

	method name same and working is different and all are in a single class

2. Run time polymorphism : (overriding)

	method name same and working is also same but one of them is in child class and 
	another is in parent calss 

*/


//polymorphism : method/function overriding

#include<iostream>
using namespace std;

class A
{
	public : 
	
		void display()
		{
			cout<<"In parent"<<endl;	
		}
		
};

class B: public A
{
	public : 
	
		void display()
		{
			cout<<"In child"<<endl;
		}
};

int main()
{
	B obj;
	
	obj.A::display();
	obj.display();
	
	return 0;
}
















