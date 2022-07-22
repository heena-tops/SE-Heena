#include<iostream>
using namespace std;

class A1
{
	public:
	int a=45,b=112,sum;
	void add(){
		sum=a+b;
		cout<<"Addition : "<<sum;
	}
};
class B1:public A1
{
	public :
	void mul(){
		cout<<"\nmultiplication : "<<a*b;
	}
};
class C1 : public A1
{
	public :
	void display(){
		cout<<"You have made addition and multiplication ";	
	}
};
class D1 : public C1,public B1
{
	public :
	void display1(){
		C1::add();
		C1::display();
		B1::add();
		B1::mul();
		cout<<"You have made addition and multiplication ";	
	}
};
main(){
	D1 obj;
	
	obj.display1();
}
