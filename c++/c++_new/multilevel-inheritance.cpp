#include<iostream>
using namespace std;

class A
{
	public :
		int a;	
		
};
class B:public A
{
	public : 

		void input1()
		{
			cout<<"Enter a number : ";
			cin>>a;
		}
};
class C:public A
{
	public :
		int y=0;
		
		void input2()
		{
			cout<<"Enter second value";
			cin>>y;
		}
		
};
class D:public C, public B
{
	public:
		int sum=0;
		
		void display()
		{
			B::a;
			sum=B::a+y;
			cout<<"Addition = "<<sum;
		}
};

int main()
{
	C obj;
	obj.input1();
	obj.input2();
	obj.display();
	
	return 0;
}
