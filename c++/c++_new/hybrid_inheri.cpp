#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout<<"This is class A"<<endl;	
		}	
};

class B : public virtual A
{
	public :
		void displayB()
		{
			cout<<"This is class B"<<endl;
		}
};

class C : public virtual A
{
	public :
		void displayC()
		{
			cout<<"This is class C"<<endl;
		}
};

class D : public B, public C
{
	public : 
		void displayD()
		{
			cout<<"This is class D";	
		}	
};

int main()
{
	
	D obj;

	obj.displayA();
	obj.displayB();
	obj.displayC();
	obj.displayD();
	
	return 0;
}
