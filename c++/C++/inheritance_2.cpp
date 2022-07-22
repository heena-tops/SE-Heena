//Multi-level inheritance

#include<iostream>
using namespace std;

class A
{
	public : 
	void displayA(){
		cout<<"Welcome to class A";	
	}	
};

class B :public A
{
	public:
	void displayB(){
		cout<<"\nWelcome to class B";
	}
};

class C : public B
{
	public:
	void displayC(){
		cout<<"\nWelcome to class C";
	}
};

main(){
	
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
}
