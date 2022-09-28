// virtual base class :

/*

	virtual base class remove the ambiguity or make the class unambiguious 
	since only one copy of parent class is created

*/

#include<iostream>
using namespace std;

class A
{
	public : 
		
		void displayA()
		{
			cout<<"Class A";
		}
};

class B : virtual public A
{
	
	public : 
		
		void displayB()
		{
			cout<<"Class B";	
		}	
};

class C : virtual public A
{
	
	public : 
		
		void displayC()
		{
			cout<<"Class C";	
		}	
};

class D : public B, public C
{
	public: 
		
		void displayD()
		{
			cout<<"Class D";	
		}	
};

int main()
{
	D obj;
	
	obj.displayA();
	obj.displayB();
	obj.displayC();
	obj.displayD();
	
	return 0;
}








