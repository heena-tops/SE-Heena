// method overloading

#include<iostream>
using namespace std;

class parent
{
	public : 
	
	int display()
	{
		cout<<"This is display method"<<endl;	
	}	
	
	int display(int a)
	{
		cout<<"Num = "<<a<<endl;
	}
	
	int display(int a, int b)
	{
		cout<<"Addition : "<<a+b;
	}
};

main()
{
	parent obj;
	
	obj.display();
	obj.display(12);
	obj.display(12,2);
}
