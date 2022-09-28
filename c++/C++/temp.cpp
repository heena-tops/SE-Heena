#include<iostream>
using namespace std;

template <typename T>
class A
{
	public : 
	
		T a,b;
		
		void input()
		{
			cout<<"Enter two numbers : ";
			cin>>a>>b;
		}
		
		void display()
		{
			cout<<"Addition : "<<a+b;
		}
};

int main()
{
	cout<<"\n\n--------For integers---------\n\n";
	A<int> obj;
	obj.input();
	obj.display();
	
	cout<<"\n\n--------For integers---------\n\n";
	A<float> obj1;
	obj1.input();
	obj1.display();
	
	return 0;
}
