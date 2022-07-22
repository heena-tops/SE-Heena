//polymorphism : operator overloading

#include<iostream>
using namespace std;

class A
{
	public:
		
		int input(int a)
		{
			return a;
		}
		
		int input(int a, int b)
		{
			return a+b;
		}
		
		int input(int x, int y, int z)
		{
			return x*y*z;
		}
};

main()
{
	A obj;

	cout<<"The number is : "<<obj.input(12)<<endl;
	cout<<"Addition is : "<<obj.input(12,2)<<endl;
	cout<<"Multiplication is : "<<obj.input(1,2,3)<<endl;
}
