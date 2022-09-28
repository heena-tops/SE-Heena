//friend function 

//it can make accessible of the private members also 

#include<iostream>
using namespace std;

class A
{
	private:
	int a=9;
	
	public : 
	
		//friend function declaration
		
		friend void display(A obj);
};

void display(A obj)
{
	obj.a+=90;
	cout<<"A = "<<obj.a;
}

int main()
{
	
	A obj1;
	
	display(obj1);
	
	return 0;
}
