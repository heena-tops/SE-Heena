//Inheritace : hybride Inheritance
 
 
#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout<<"This is class A"<<endl;
		}
};

class B : public A
{
	public:
		void displayB()
		{
			cout<<"This is class B"<<endl;
		}
};

class C : public A
{
	public:
		void displayC()
		{
			cout<<"This is class C"<<endl;
		}
};

class D: public B,C
{	
	public:
		void displayD()
		{
			B::displayA();
			B::displayB();
			C::displayA();
			C::displayC();
			cout<<"This is class D"<<endl;
		}
};

main()
{
	D obj;
	
	obj.displayD();
}
