//polymorphism

//overloading : 

// method overloading : 

#include<iostream>
using namespace std;

class A
{
	public : 
	
	void display(int a)
	{
		cout<<"A = "<<a<<endl<<endl;
	}	
	
	void display(int x, int y)
	{
		cout<<"X = "<<x<<endl<<"Y = "<<y;
	}
	
	void display(int s, int t, int u)
	{
		cout<<endl<<endl<<"S = "<<s<<endl<<"T = "<<t<<endl<<"U = "<<u;
	}	
};

int main()
{
	A obj;
	
	obj.display(12);
	obj.display(1,2);
	obj.display(12,23,34);
	
	return 0;
}
