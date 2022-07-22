//Constructor: it called automatically when object of a class is created
/*
	constuctor name and class name must be same
*/

#include<iostream>
using namespace std;

class Student
{
	public:
	Student()
	{
		cout<<"Here is your first constructor ";
	}
};

main()
{
	Student s;
}
