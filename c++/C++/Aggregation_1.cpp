#include<iostream>
using namespace std;

class Info{
	public:
		string Name;
		string Brand; 
		int Price;
		
		Info(string name, string brand, int price)
		{
			this->Name = name;
			this->Brand = brand;
			this->Price = price;				
		}

};

class Car{
	
	string Car_type;
	int Model_id;
	Info* InFo;
	
	public :
		Car(string car_type, int model_id, Info* info)
		{
			this->Car_type = car_type;
			this->Model_id = model_id;
			this->InFo = info;
		}
		
		void display(){
			cout<<"\n\n ------------------ Car Information -------------------- \n\n";
			
			cout<<"\n Name : "<<InFo->Name;
			cout<<"\n Brand : "<<InFo->Brand;
			cout<<"\n Price : "<<InFo->Price;
			cout<<"\n Type : "<<Car_type;
			cout<<"\n Model Id : "<<Model_id;
		}
};

main()
{
	char Name[20],Brand[20],Car_type[20];
	int price,Model_id;
	
	cout<<"Enter Car name : ";
	gets(Name);
	cout<<"Enter Brand Name : ";
	gets(Brand);
	cout<<"Enter Price : ";
	cin>>price;
	
	fflush(stdin);
	
	cout<<"Enter Car Type : ";
	gets(Car_type);
	cout<<"Enter Car Model Id : ";
	cin>>Model_id;
	
	Info i1 = Info(Name,Brand,price);
		
	Car c1 = Car(Car_type,Model_id,&i1);

	c1.display();	
}
