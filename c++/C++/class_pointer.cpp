//class and pointer

#include<iostream>
using namespace std;

class name
{
	int a;
	public:
	
	int input()
	{
		cout<<"Enter value : ";
		cin>>a;
	}	
	
	void display()
	{
		cout<<"Value of a is : "<<a;
	}
	
};

main()
{
	name obj;
	name *ptr;
	
	ptr=&obj;
	ptr->input();
	ptr->display();
}
