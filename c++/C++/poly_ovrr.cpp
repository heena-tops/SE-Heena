//polymorphism : method overriding

#include<iostream>
using namespace std;

class A{
	
	public:
		void display()
		{
			cout<<"class A"<<endl;
		}
};

class B : public A
{
	public:
		
	 void display()
	 {
	 	A::display();l
	 	cout<<"class B"<<endl;
};

main()
{
	B obj;
	obj.display();
	
}
