#include<iostream>
using namespace std;

class Address
{
	public :
		string city;
		string state;
		int pincode;
		
	Address(string city_1,string state_1,int pin_1)
	{
		this->city = city_1;
		this->state = state_1;
		this->pincode = pin_1;
	}
};

class Employee
{	
	public:
		int id;
		string name;
		Address * address;
		
	Employee(int id_1, string name_1, Address * address)
	{
		this->id = id_1;
		this->name = name_1;
		this->address = address;
	}
	
	void display()
	{
		cout<<"Id = "<<id;
		cout<<endl<<"Name = "<<name;
		cout<<endl<<"City = "<<address->city;
		cout<<endl<<"State = "<<address->state;
		cout<<endl<<"Pincode = "<<address->pincode;
	}
		
};

int main()
{
	Address a1("Ahmedabad","Gujarat",352641);
	
	Employee e1(12,"Harsh",&a1);
	
	e1.display();
	
	return 0;
}
