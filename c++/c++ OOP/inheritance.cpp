// Ambiguity in single level inheritance
#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"This is class A "<<endl;
		}
};

class B : public A
{
	public:
		void display()
		{
			cout<<"This is class B "<<endl;
		}
};

main()
{
	B obj;
	obj.A::display();
	obj.B::display();
}
