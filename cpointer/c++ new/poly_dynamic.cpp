//Dynamic Polymorphism(runtime)

#include<iostream>
using namespace std;

class A
{
	public:
		
		virtual void display()
		{
			cout<<"This is display in class A"<<endl;
			
		}
		
		void print()
		{
			cout<<"This is 2nd method of class A"<<endl;
		}
};

class B : public A
{
	public:
		
		void display()
		{
			cout<<"This is display in class B"<<endl;
		}
		
		void print()
		{
			cout<<"This ios print in class B"<<endl;
		}
};


main()
{
	A *ptr;
	B obj;
	
	ptr=&obj;
	
	ptr->display();
	
	ptr->print();
}
