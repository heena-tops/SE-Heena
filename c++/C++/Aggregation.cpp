// Aggregation
 
/*
aggregation is a process in which one class defines another class as any entity reference
 i.e. : common properties group togather in one class as reference of another entity

 ---> In C++, Aggregation is used to represent the 'HAS-A' relationship between two objects
 

this keyword : 

 'this' is a keyword that refers to the current instance of the class.
 
 There can be 3 main usage of this keyword in C++. 
 -----> It can be used to pass current object as a parameter to another method. 
 -----> It can be used to refer current class instance variable.
 -----> It can be used to declare indexers.
 
	'this' works as same as self in python
	e.g. : this->city = cityname;
				
		here, city is a class varible
		&   cityname is a contructor parameter  
*/


#include<iostream>
using namespace std;

class Address{
	public :
		string city;
		string state;
		int pincode;
		
		Address(string cityname, string statename, int pincode)	//constructor
		{
			this->city = cityname;
			this->state = statename;
			this->pincode = pincode;
		}
};

class Employee{
	
	int id;
	string name;
	Address* address;
	
	public:
		Employee(int id, string name, Address* address)	//constructor
		{
			this->id = id;
			this->name = name;
			this->address = address;
		}
		
		
		
		void display()
		{
			cout<<"\n Id = "<<id;
			cout<<"\n Name = "<<name;
			cout<<"\n City = "<<address->city;
			cout<<"\n State = "<<address->state;
			cout<<"\n Pincode = "<<address->pincode;
		}
};

main()
{
	Address a1 = Address("Ahmedabad","Gujarat",380015);
	
	Employee e1 = Employee(12,"Hana",&a1);
	e1.display();
}









