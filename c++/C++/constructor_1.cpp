//Constructor : 

/*

	Constructor in C++ is a special method which call automatically 
	when the object of such class is created
	
	>> rules for constructor method 
	
	- it should always be public 
	- constructor name always same as class name
	- never need to specify any data type for constructor method 

*/

#include<iostream>
using namespace std;

class one
{
	public : 
		
		//constructor method 
		one()
		{
			cout<<"Constructor method call !!!";
		}
};

int main()
{
	one obj;
	
	return 0;
}
