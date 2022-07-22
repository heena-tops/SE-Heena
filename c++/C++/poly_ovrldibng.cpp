//polymorphism : method overloading

#include<iostream>
using namespace std;

class A
{
	public:
		
		void input()
		{
			cout<<"This is method overloading"<<endl;
		}
		
		void input(int a)
		{
			cout<<"value of a = "<<a<<endl;
		}
		void input(int x, int y)
		{
			cout<<"Addition : "<<x+y;
		}
};

main()
{
	A obj;
	obj.input();
	obj.input(12);
	obj.input(12,23);
}
