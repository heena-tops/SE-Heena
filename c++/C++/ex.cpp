//polymorphism : operator overloading

#include<iostream>
using namespace std;

class A
{
	public:
		int a=12,b=2;
};

class B
{
	public:
		int p=2,q=4;
};

class C : public A,B
{
	public:
		
};

main()
{
	A obj;
	B obj1;
	C objf;
	
	objf=obj+obj1;
	
}
