#include<iostream>
using namespace std;
   
class Base 
{ 
	public: 
	    void show() { cout<<" In Base \n"; } 
}; 
   
class Derived: public Base 
{ 
	public: 
	    void show() { cout<<"In Derived \n"; } 
}; 
   
main() 
{ 
    Derived obj;
	
	obj.show();
} 
