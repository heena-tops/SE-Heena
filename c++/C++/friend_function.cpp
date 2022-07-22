#include<iostream>
using namespace std;
class Sample
{
	int a;
	
	friend int myfriendfun(Sample obj); // friend function declaration 
	
};

//function definition

int myfriendfun(Sample obj)
{
	obj.a = 100;
	return obj.a;
}
main()
{
	Sample s;
	cout<<"\n "<<myfriendfun(s);
}
