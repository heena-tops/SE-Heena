#include<iostream>
using namespace std;

class A
{
	int num1,num2;
	
	public:
		void input()
		{
			cout<<"Enter number 1 :";
			cin>>num1;
			cout<<"Enter number 2 :";
			cin>>num2;
		}
		
		friend int add(A obj);
};

int add(A obj)
{
	obj.num1+=obj.num2;
	
	return obj.num1;
	return obj.num2;
}

main()
{
	A r;
	
	r.input();
	
	cout<<add(r);
}
