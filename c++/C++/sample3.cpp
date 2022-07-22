#include<iostream>
using namespace std;
class Student
{
	public:
	void display()
	{
		cout<<"\n this is display method ";
	}
	
	void display(int a,int b)
	{
		cout<<"\n a = "<<a;
		cout<<"\n b = "<<b;
	}
	void display(int num1)
	{
		cout<<"\n num1 = "<<num1;
	}
};
main()
{
	Student obj;
	obj.display();
	obj.display(101);
	obj.display(1,2);
}
