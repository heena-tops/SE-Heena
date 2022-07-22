#include<iostream>
using namespace std;

class A
{
	
	public:
	A(){
		cout<<"This is class A";
	}
};

class B : public A
{
	
	public:
	B(){
		cout<<"\nThis is class B";
	}
};

main(){
	
	B obj;
	
}
