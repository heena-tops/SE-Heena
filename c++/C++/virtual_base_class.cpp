#include<iostream>
using namespace std;

class A
{
	public : 
		int a;	
};

class B: virtual public A
{
	public : 
		int b;	
};

class C: virtual public A
{
	public :
	
		int c;	
}; 

class D : public B, public C
{
	public :
		int d;
};

int main()
{
	D obj;
	
	cout<<"Enter a : ";
	cin>>obj.a; // request for  a is unambiguious since only one copy of class A is created
	
	cout<<"Enter b: ";
	cin>>obj.b;
	
	cout<<"Enter c : ";
	cin>>obj.c;
	
	cout<<"Enter d: ";
	cin>>obj.d;
	
	cout<<"Addition = "<<obj.a+obj.b+obj.c+obj.d;
	
	return 0;
}
