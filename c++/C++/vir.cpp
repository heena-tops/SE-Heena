#include<iostream>
using namespace std;

class A
{
	public:
	void displayA()
	{
		cout<<"This is A"<<endl;
	}
};

class B : virtual public A
{
	public:
	void displayB()
	{
		cout<<"This is B"<<endl;
	}
};
class C: virtual public A
{
	public:
	void displayC()
	{
		cout<<"This is C"<<endl;
	}
};

class D : public B, public C
{
	public:
	void displayD()
	{
		cout<<"This is D"<<endl;
	}
};

main()
{
	
	D obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	obj.displayD();
}
