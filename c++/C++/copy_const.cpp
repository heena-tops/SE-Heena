//copy constructor 

#include<iostream>
using namespace std;

class A
{
	int a,b;
	
	public:
	
		//parameterized constructor
		A(int p,int q)
		{
			a=p;
			b=q;
		}
		
		//copy constructor 
		A(A &obj)
		{
			cout<<"Copy constructor call"<<endl;
			
			cout<<"A = "<<obj.a<<endl;
			cout<<"B = "<<obj.b;
		}
};

int main()
{
	A obj(3,5);
	
	A obj1(obj);
	
	return 0;
}
