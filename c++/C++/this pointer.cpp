#include<iostream>
using namespace std;

class test
{
	int x;
	
	public:
	
	int setX(int a)
	{
		this->x=a;	
	}	
	
	void print(){ cout<<"a = "<<x<<endl;}
	
};

main()
{
	test obj;
	int p;
	cout<<"Enter value : ";
	cin>>p;
	obj.setX(p);
	obj.print();
}
