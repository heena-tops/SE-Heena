#include<iostream>
#include<cstring>
using namespace std;

class A{
	
	public : 
	
	char choice[20];
	
	void display()
	{
		cout<<endl<<"              WELCOME TO RK TRAVELS            "<<endl;
		cout<<"-----------------------------------------------------"<<endl<<endl;
		cout<<" We provide following tours "<<endl;
		cout<<"     From            To"<<endl;
		cout<<"1. Ahmedabad        Baroda"<<endl;
		cout<<"2. Ahmedabad        Bhuj"<<endl;
		cout<<"3. Ahmedabad        Shimla"<<endl;
		cout<<"4. Ahmedabad        Uti"<<endl;
		cout<<"5. Ahmedabad        Jaipur"<<endl;
		
		cout<<"Enter yes for reistration : ";
		cin>>choice;
	}
	
	
};

class B 
{
	public : 
	
		char name[20],city[20],u_name[20],pswd[20];
	
		void input()
		{
			cout<<"----------------------Registration form---------------------------"<<endl<<endl;
			cout<<"1. Name : ";
			cin>>name;
			cout<<endl<<"2. city : ";
			cin>>city;
			
			cout<<endl<<"----------------------Login Crediantials---------------------------"<<endl;
			cout<<endl<<"1. User Name : ";
			cin>>u_name;
			cout<<endl<<"2. Password : ";
			cin>>pswd;
		}
};

class C : public B
{
	public :
	
	char ul_name[20],l_pswd[20];
	
	void login()
	{
		cout<<"Enter name : ";
		cin>>ul_name;
		cout<<"Enter pswd : ";
		cin>>l_pswd;
	}
	
	
};

int main()
{
	char ip[20]="yes";
	
	A obj;
	C obj1;
	
	obj.display();
	
	if(strcmp(obj.choice,ip)==0)
	{
		obj1.input();
		obj1.login();
	}
	else
	{
		cout<<"	Thank You ";
	}
	
	return 0;
}
