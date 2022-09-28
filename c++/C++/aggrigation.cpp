#include<iostream>
using namespace std;

class A
{
	public :
		
		string city;
		string state;
		int pin;
		
		
		A(string c, string s, int p_code)
		{
			this->city=c;
			this->state=s;
			this->pin=p_code;
		}
};

class E
{
	public:
		
		int id;
		string name;
		A * add;
		
		E(int i, string n, A * a)
		{
			this->id=i;
			this->name=n;
			this->add=a;
		}
		
		void display()
		{
			cout<<"ID = "<<id<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"City = "<<add->city<<endl;
			cout<<"State = "<<add->state<<endl;
			cout<<"Pin code = "<<add->pin;
		}
		
};

int main()
{
	A obj1("Ahmd","Guj",123456);
	E obj(23,"Nitin",&obj1);
	
	obj.display();
	
	return 0;
}
