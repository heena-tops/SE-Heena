//Inheritance : single level inheritance 

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

class B : public A  //inherit class A into class B
{
	public :
	 
		void displayB()
		{
			cout<<"This is class B";
		}
};

int main()
{
	B obj;
	
	obj.displayA();
	obj.displayB();
	
	return 0;
}
