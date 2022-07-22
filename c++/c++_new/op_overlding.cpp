
#include<iostream>
using namespace std;

class A
{
	int first,second;
	
	public:
		A(int x=0, int y=0)
		{
			first=x;
			second=y;
		}
		
		A operator +(const A &obj)
		{
			A op;
			
			op.first = first+obj.first;
			op.second = second+obj.second;
			
			return op;
		}
		
		void display()
		{
			cout<<"Addition of first digits : "<<first;
			cout<<endl<<"Addition of second digits : "<<second;
		}
		
};

main()
{
	A obj1(1,2);
	A obj2(3,4);
	
	A obj3 = obj1+obj2;
	
	obj3.display();
}
