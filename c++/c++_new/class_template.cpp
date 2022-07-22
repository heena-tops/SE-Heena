#include<iostream>
using namespace std;

template <class T>

class A
{
	public : 
	
	T c,b;
	
	void input()
	{
		cout<<"Enter two numbers : ";
		cin>>c>>b;	
	}	
	
	void add()
	{
		cout<<"c = "<<c;
		cout<<"b = "<<b;
	}
};

main()
{
	cout<<"\n\n---------------Integers----------------\n\n";
	A<int> obj1;
	obj1.input();
	obj1.add();
	
	cout<<"\n\n---------------Float----------------\n\n";
	A<float> obj2;
	obj2.input();
	obj2.add();
	
	cout<<"\n\n---------------Float----------------\n\n";
	A<char> obj3;
	obj3.input();
	obj3.add();
}
