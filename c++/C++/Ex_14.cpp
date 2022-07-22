//Constructor : special member function
//automatically called when object of class is craeted 
//class name and constructor name must be same 
//constructor always define in public mode


#include<iostream>
using namespace std;

class student
{
	public:
	student(){
		cout<<" Your first constructor programe ";
	}
	
	student(int a,int b){
		cout<<"\n a= "<<a;
		cout<<"\n b= "<<b;
	}
};

main()
{
	student obj;	//default constructor
	
	student obj1(12,13);	//parameterized constructor
	
}
