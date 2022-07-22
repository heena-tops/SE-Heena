//Inheritance : 

#include<iostream>
using namespace std;

class A
{
	public:
	
	int num1;
		
	void input1()
	{
		cout<<"Enter number 1 : ";
		cin>>num1;
	}	
};


class B : public A
{
	public:
	
	int num2;	
	
	void input2()
	{
		cout<<"Enter number 2 : ";
		cin>>num2;		
	}	
};

class C : public B
{
	public:
	
	int add;
	
	void result()
	{
		add = num1+num2;
		
		cout<<"Addition : "<<add;
	}	
};

main()
{
	C obj;
	
	obj.input1();
	obj.input2();
	obj.result();
}
