#include<iostream>
using namespace std;

class A
{
	public : 
			
		virtual void display()
		{
			cout<<"This is a class";
		}
};

class B : public A
{
	public : 
	
		void display()
		{
			cout<<"This is b class";
		}

};

int main()
{
	B obj;
	
	obj.display();
	
	return 0;
}
