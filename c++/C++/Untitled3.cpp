#include<iostream>
using namespace std;

class Address
{
	public : 
		string city;
		string state;
		int pin;
		
		Address(string city, string state, int pin)
		{
			this->city = city;
			this->state = state;
			this->pin = pin; 
		}	
};

class Employee
{
	public :
		int Id;
		string Name;
		Address *ad;
		
		Employee(int Id, string Name, Address* ad)
		{
			this->Id = Id;
			this->Name = Name;
			this->ad = ad;
		}
		
		void display()
		{
			cout<<"------------------Employee Details--------------------"<<endl<<endl;
			
			cout<<"Id = "<<Id<<endl;
			cout<<"Name = "<<Name<<endl;
			cout<<"City = "<<ad->city<<endl;
			cout<<"State = "<<ad->state<<endl;
			cout<<"Pin-code = "<<ad->pin<<endl;
		}
};

main()
{
	Address A("Ahmedabad","Gujarat",380015);
	
	Employee E(12,"Parth",&A);
	
	E.display();
}
