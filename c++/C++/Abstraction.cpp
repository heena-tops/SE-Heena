//abstraction : which contain only method declaration no method body
/*
	in other languges abstraction concept is achieved 
	by abstract(method body may or may not be blank) 
	or interface(you must have to let the method body blank) 
	
	in c++ abstraction is only achieved with pure virtual function
	* pure virtual function means method body contains nothing
*/

#include<iostream>
using namespace std;

class A{
	public:
		virtual void display()=0;
};

class B : public A{
	public:
		void display(){
			cout<<"Hello \n";
		}
};

main()
{
	B obj;
	obj.display();
}


