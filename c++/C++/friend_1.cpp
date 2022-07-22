#include<iostream>
using namespace std;

class A
{
	int num;
	
	public:
		void input()
		{
			cout<<"Enter a number : ";
			cin>>num;
		}
		
	
	friend int add(A obj); // friend function declaration	
};

//function definition

int add(A obj)
{
	
	obj.num+=2;
	
	return obj.num;
}

main()
{
	A a;
	
	a.input();
	
	cout<<"This is main function and Your addition is given below"<<endl;
	cout<<add(a);
}
