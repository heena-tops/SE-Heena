// Ambiguity in single level inheritance
#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout<<"This is class A "<<endl;
		}
};

class B : public A
{
	public:
		void displayB()
		{
			cout<<"This is class B "<<endl;
		}
};

main()
{
	B obj;
	obj.displayA();
	obj.displayB();
}
