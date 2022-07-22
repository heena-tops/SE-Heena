#include <iostream>
using namespace std;

class A
{
	int a,b;
	public:
    A(int x, int y)
    {
    	cout<<"This is constructor "<<endl;
    	a=x;
    	b=y;
	}
	
	void display()
	{
		cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
	}
	
	~A()
	{
		cout<<"This is destructor ";
	}
};

int main()
{
	int p,q;
	
	cout<<"Enter two numbers : ";
	cin>>p>>q;
	
	A obj(p,q);
	obj.display();
}
