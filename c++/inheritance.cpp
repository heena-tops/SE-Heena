//ambiguity in single level inheritance 

#include<iostream>
using namespace std;

class A
{
	public :
		
		void display()
		{
			cout<<"Class A"<<endl;
		}
};

class B : public A
{
	public : 
		
		void display()
		{
			cout<<"Class B"<<endl;
		}
		
};

class C : public B
{
	public : 
		
		void display()
		{
			cout<<"Class C"<<endl;
		}
		
};

int main()
{
	C obj1;
	
	obj1.A::display();
	obj1.B::display();
	obj1.display();

	return 0;
}
