// class & pointers

#include<iostream>
using namespace std;

class A
{
	public:
	void input(int a)
	{
		cout<<"value of A = "<<a<<endl;		
	}	
	void display()
	{
	cout<<"This is Class and pointer relation";
	}
};

main()
{
	A obj;
	
	A*ptr;
	
	ptr=&obj;
	
	ptr->input(12);
	ptr->display();
}
