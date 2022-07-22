#include<iostream>
using namespace std;

class A
{
	int a;
	
	public : 
	
	void set() // setter method
	{
		cout<<"Enter a number  : ";
		cin>>a;
	}
	
	int get() // getter method 
	{
		return a;
	}
};

main()
{
	A obj;
	
	obj.set();
	cout<<"Value is : "<<obj.get();
}
