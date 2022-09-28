//how to access private memebres of a class 

#include<iostream>
using namespace std;

class A
{
	int a,b;
		
	public:
		void add(int x, int y)
		{
			a=x;
			b=y;
			
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b;
		}	
};

int main()
{
	A obj;
	int v,b;
	
	cout<<"Enter two numbers : ";
	cin>>v>>b;
	
	obj.add(v,b);
	
	return 0;	
}


