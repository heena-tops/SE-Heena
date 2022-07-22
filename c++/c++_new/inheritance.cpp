//Inheritance : 

/*

	Inheritance is the concept in which there is 
	a parent-child relation between the classes 

	--> Parent-class or Base-class or Super-class 
	--> Child-class or sub-class or derived-class

	--> A child can inherit the properties of Parent Class
	--> Child can access data and data functions of your Parent class 

	>>> Types of Inheritance :
		
		Single Inheritance
		Multiple Inheritcance
		Hierarchical Inheritance
		Multilevel Inheritance
		Hybrid Inheritance

*/


//Inheritance : Single Level Inheritance 

#include<iostream>
using namespace std;

class Parent
{
	public:
	
		int a,b;
		
		void display_P(){ cout<<"This is Base class"<<endl; }
	
};

class Child : public Parent 
{
	public:
		
		void input_C(){ cout<<"Enter two integers : ";  cin>>a>>b; }
		
		void display_C(){ cout<<"A = "<<a<<endl<<"B = "<<b; }
};

int main()
{
	
	Child obj;
	
	obj.display_P();
	
	obj.input_C();
	obj.display_C();
	
	return 0;
}
