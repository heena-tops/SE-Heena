//class and pointers

#include<iostream>
using namespace std;

class A
{
	public:
		
		void display()
		{
			cout<<"This is class A";
		}
		
		
};

main()
{
	A obj;
	
	A *ptr;
	
	ptr=&obj;
	
	ptr->display();
}
