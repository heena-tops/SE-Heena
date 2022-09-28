// Method overriding 

#include<iostream>
using namespace std;

class P
{
	public :
	
	void display()
	{
		cout<<"This is class P"<<endl;
	}	
};

class C : public P
{
	public : 
	
	void display()
	{
		P::display();
		cout<<"This is class C";	
	}		
};

int main()
{
	C obj;
	
	obj.display();
	
	return 0;
}
