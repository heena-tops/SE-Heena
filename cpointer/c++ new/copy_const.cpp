//copy constructor 

#include<iostream>
using namespace std;

class A
{
	int a,b;
	public : 
	
	A(int p, int q)
	{
		a=p;
		b=q;
	}
	
	A(A &obj)
	{
		cout<<"A = "<<obj.a;
		cout<<"B = "<<obj.b;
	}
}

main()
{
	A obj(12,3);
	
	A obj2(obj)
}
