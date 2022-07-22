#include<iostream>
using namespace std;

template <class T>
class A
{
	public :
	
		T a,b;
		
		void input()
		{
			cout<<"Enter two numbers : ";
			cin>>a>>b;	
		}	
		
		void add();
		void mul();
};

template <class T>
void A<T> :: add()
{
	cout<<"Addition = "<<a+b;
}

template <class T>
void A<T> :: mul()
{
	cout<<"Multiplication = "<<a*b;
}

main()
{
	A<int> obj;
	obj.input();
	obj.add();
	obj.mul();
}
