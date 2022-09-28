#include<iostream>
using namespace std;

class Address
{
	public : 
	
		string City;
		string State;
		int Pincode;
		
		Address(string city,string state, int pincode)
		{
			this->City = city;
			this->State = state;
			this->Pincode = pincode; 
		}
};

class Employee
{
	public : 
		
		int E_id;
		string Name;
		Address * address;
		
		Employee(int id, string name, Address * ad)
		{
			this->E_id = id;
			this->Name = name;
			this->address = ad;
		}
		
		void display()
		{
			cout<<endl<<"ID = "<<E_id;
			cout<<endl<<"Name = "<<Name;
			cout<<endl<<"City = "<<address->City;
			cout<<endl<<"State = "<<address->State;
			cout<<endl<<"Pincode = "<<address->Pincode;
		}
		
};

int main()
{
	string name,state,city;
	int id,pin;
	
	cout<<"Enter name : ";
	cin>>name;
	
	cout<<"entre id : ";
	cin>>id;
	
	cout<<"Enter city";
	cin>>city;
	
	cout<<"Enter State";
	cin>>state;
	
	cout<<"Enter pin : ";
	cin>>pin;
	
	Address A(city,state,pin);
	Employee E(id,name,&A);
	
	E.display();
	
	return 0;
}
