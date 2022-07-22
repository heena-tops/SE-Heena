//class template
#include<iostream>
using namespace std;

template <typename T>

class display
{
	T a,b;
	
	public :
	
	void input()
	{
		cout<<"Entre two values : ";
		cin>>a>>b;
	}	
	
	void dis()
	{
		cout<<"A = "<<a<<endl;
		cout<<"B = "<<b;		
	}
};

main()
{
	
	cout<<"\nEnter values for int type of data"<<endl;
	display<int> obj;
	obj.input();
	obj.dis();
	
	cout<<"\n\n--------------------------------------------";
	
	cout<<"\n\nEnter values for float type of data"<<endl;
	display<float> obj1;
	obj1.input();
	obj1.dis();
	
	cout<<"\n\n-------------------------------------";
	cout<<"\n\nEnter values char type of data"<<endl;
	display<string> obj2;
	obj2.input();
	obj2.dis();
	
}
