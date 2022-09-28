#include<iostream>
using namespace std;

class A
{
	public : 
		
		void display()
		{
			cout<<"This is method"<<endl;
		}
		
		void display(int a)
		{
			cout<<"A = "<<a<<endl;
		}
		
		void display(int p, int q)
		{
			cout<<"P = "<<p<<endl;
			cout<<"Q = "<<q<<endl;
		}
};


int main()
{
	A obj;
	
	obj.display();
	obj.display(22);
	obj.display(12,2);
	
	return 0;
}

