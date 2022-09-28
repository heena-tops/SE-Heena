#include<iostream>
using namespace std;

class A
{
	public : 
		
		string str1,str2;
		
		//setter method : to set data 
		void set()
		{
			cout<<"Enter a strings : ";
			cin>>str1;
			
			cout<<"Enter secodn string : ";
			cin>>str2;
		}
		
		
		//getter method : to get the data
		void get()
		{
			cout<<"String 1 = "<<str1<<endl<<"String 2 = "<<str2;
		}	
};

int main()
{
	
	A obj;
	
	obj.set();
	
	obj.get();
}
