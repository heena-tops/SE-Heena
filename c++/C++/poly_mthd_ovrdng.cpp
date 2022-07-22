//method overriding
#include<iostream>
using namespace std;

class A{
	public:
		void display(){
			cout<<"\nhello from A";
		}
};
class B: public A{
	public:
		void display(){
			A::display();
			cout<<"\nhello from B";
		}
};
class C:public B{
	public:
	void display(){
		B::display();
		cout<<"\nhello from C";
	}
};

main(){
	C obj;
	obj.display();
}
