#include<iostream>
using namespace std;

class A
{

	int a;
	
	friend int num(A obj);
};

int num(A obj)
{
	obj.a=12;
	
	return obj.a;
}

main()
{
	A obj1;
	
	cout<<num(obj1);
}
