#include<iostream>
using namespace std;

class A
{
	int a=2;
	
	
	//creation of friend function
	friend 	int display(A obj); 
};


//define the function
int display(A obj)
{
	obj.a++;
	
	return obj.a;
}

main()
{
	A obj1;
	
	cout<<"Num = "<<display(obj1);	
}
