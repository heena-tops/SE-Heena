//multiple inheritance

#include<iostream>
using namespace std;

class A
{
	
	int a;
	
	void displayA()
	{
		cout<<endl<<"This is class A"<<endl;
	}	
};

class B : public A
{
	public : 
	
	void displayB()
	{
		cout<<"This is class B"<<endl;
	}
};

class C : public A
{
	public : 
	
	void displayC()
	{
		cout<<"This is class C";	
	}	
};

class D : public B, public C
{
	public : 
	
	void displayD()
	{
		C::displayA();
		cout<<"This is class D";	
	}	
};


int main()
{
	D obj;

	obj.displayB();
	obj.displayC();
	obj.displayD();
		
	return 0;
}
