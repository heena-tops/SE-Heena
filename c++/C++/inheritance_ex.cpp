//Inheritance : single level 

#include<iostream>
using namespace std;

class parent
{
	public :
		
		int a;
		
};

class child1 : public parent
{
	public: 
		int b;
	
		void displayB()
		{
		cout<<"Enter two numbers : ";
		cin>>a>>b;
		}	
};

class child2: public child1
{
	public:
	
		void add()
		{
			cout<<"Addition : "<<a+b;
			}	
};

int main()
{
	child2 obj;
	obj.add();
	
	return 0;
}
