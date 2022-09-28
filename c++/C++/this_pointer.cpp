#include<iostream>
using namespace std;

class A
{
	public : 
		int x;
	
		int input(int a)
		{
			this->x = a;	
		}	
		
		void display()
		{
			cout<<"\nValue of a = "<<x;
		}
};

int main()
{
	A obj;
	
	obj.input(12);
	obj.display();
	
	return 0;
}
