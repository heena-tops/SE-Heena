#include<iostream>
using namespace std;

class Address
{
	public:
	string City;
	string State;
	int Pincode;
	
	Address(string city, string state, int pincode)
	{
		this->City=city;
		this->State=state;
		this->Pincode=pincode;
	}
};

class Employee
{
	public:
	
	int Id;
	string Name;
	Address * address;
 
	
		Employee(int id, string name, Address * address)
		{
			this->Id=id;
			this->Name=name;
			this->address=address;
		}
		
		void display()
		{
			cout<<"Id = "<<Id<<endl;
			cout<<"Name = "<<Name<<endl;
			cout<<"City = "<<address->City<<endl;
			cout<<"State = "<<address->State<<endl;
			cout<<"Pincode = "<<address->Pincode;
		}
};

main()
{
	Address A1 = Address("Ahmedabad","Gujarat",380015);
	Employee E1 = Employee(12,"Hana",&A1);
	E1.display();	
}
