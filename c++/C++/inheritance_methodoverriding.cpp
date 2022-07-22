#include<iostream>
using namespace std;
class A
{
	public:
	void display()
	{
		cout<<"\n this is display method A class";
	}	
};
class B:public A
{
	public:
		void display()
		{
			A::display();
			cout<<"\n this is display method b class";
		}
};
main()
{
	B obj;
	obj.display();
	
}
