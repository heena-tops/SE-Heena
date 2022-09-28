//Inheritance : Heirarchical Inheritance  

#include<iostream>
using namespace std;

class A
{
	public:
		
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};

class B : public A
{
	public:
		
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};

class C : public A
{
	public:
		
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};

class D: public A
{
	public:
		
		void displayD()
		{
			cout<<"Class D"<<endl;
		}
};

int main()
{
	B obj;
	C obj1;
	D obj2;
	
	obj2.displayA();
	obj.displayB();
	obj1.displayC();
	obj2.displayD();
	
	return 0;
}
