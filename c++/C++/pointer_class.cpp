//class pointer relation

#include<iostream>
using namespace std;

class A
{
	public :
	
		void display()
		{
			cout<<"Class and Pointer";	
		}	
};

int main()
{
	A *ptr;
	
	ptr->display();
	
	return 0;
}
