//Templates in c++: 


/*
	
	templates in c++ are very simple yet, very powerful feature 
	
	use to provide versetiel data type to your variables and functions 
	
		Types of templates : 
		
		1. class template
		2. function template 
		
	Syntax : 
	
		template <class/typename var_name>
		
	ex: 
		template <class T>

*/

#include<iostream>
using namespace std;

template <typename T>
class A
{
	public : 
		
		T a,b;
		
		void add()
		{
			cout<<"Enter two numbers : ";
			cin>>a>>b;
			
			cout<<"Addition : "<<a+b;
		}
		
		void display()
		{
			cout<<"Enter any two characters : ";
			cin>>a>>b; 
			
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};

int main()
{
	cout<<"\n\n---------For integers -------------\n\n";
	A <int>obj;
	obj.add();
	
	cout<<"\n\n---------For float -------------\n\n";
	A <float>obj1;
	obj1.add();
	
	cout<<"\n\n---------For characters -------------\n\n";
	A <char>obj2;
	obj2.display();
	
	return 0;
}

























