//dynamic object creation using new keyword

#include<iostream>
using namespace std;

class my
{
	private :
	int a,b;
	
	public:
	void setdata(int p,int q)
	{
		a=p;
		b=q;
	}	
	
	void getdata()
	{
		cout<<"A = "<<a;
		cout<<endl<<"B = "<<b;
	}
};

main()
{
	my *ptr;
	
	ptr = new my;
	
	ptr->setdata(2,3);
	ptr->getdata();
	
	delete ptr;
}
