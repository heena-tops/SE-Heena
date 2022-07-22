// Polymorphism : Dynamic(runtime) polymorphism

#include<iostream>
using namespace std;

class A
{
	public :
	
	virtual void display()
	{
		cout<<"This is A class";
	}	
	
	void out()
	{
		cout<<"This is A class C++";
	}
};

class B : public A
{
	public :
	
	void diplay()
	{
		cout<<"This is B class";
	}	
	
	void out()
	{
		cout<<"This is B class C++";
	}
};

int main()
{
	A *ptr;
	
	ptr->display();
	
	return 0;
}
