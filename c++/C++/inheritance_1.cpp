
//inheritance : 
/*
In inheritance the property of one class aquire the properties of another class

there are 5 types of inheritance :

1.single level inheritance
2.multi-level inheritance
3.multi-ple inheritance   ------> supported in c++, not supported in java,python,etc.
4.heirarchical inheritance
5.hybride inheritance

*/



// Single inheritance 

#include<iostream>
using namespace std;

class A
{
	
	public:
	void displayA(){
		cout<<"This is class A";
	}
};

class B : public A
{
	
	public:
	void displayB(){
		cout<<"\nThis is class B";
	}
};

main(){
	
	B obj;
	obj.displayA();
	obj.displayB();
	
}
