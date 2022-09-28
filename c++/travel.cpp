// Travel information using Inheritance
#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		
		char name[100],email[100],address[200],DOB[20],use[100],pass[100];
		
		void display()
		{
			
			double age,contact;
			cout<<"----------------------Registration form---------------------------"<<endl<<endl;
			cout<<"1. Name : ";
			cin>>name;
			cout<<endl<<"2. Age : ";
			cin>>age;
			cout<<endl<<"3. DOB : ";
			cin>>DOB;
			cout<<endl<<"4. Email : ";
			cin>>email;
			cout<<endl<<"5. Contact : ";
			cin>>contact;
			cout<<endl<<"6. Address : ";
			cin>>address;
			
			cout<<endl<<"----------------------Login Crediantials---------------------------"<<endl;
			cout<<endl<<"1. User Name : ";
			cin>>use;
			cout<<endl<<"2. Password : ";
			cin>>pass;
			
			cout<<endl<<"Registration done";		
		
		}
};        
class B: public A
{
	public:
		
		char str[20],str1[20]="Yes",str2[20]="yes",str3[20]="No",str4[20]="no";
		
		char reg()
		{
			here:			
			
	
			cout<<"Press Yes for Registration"<<endl;
			gets(str);
					
			if(strcmp(str,str1)==0)
			{
				 display();
			} 
			else if(strcmp(str,str2)==0)
			{
				display();
			}
			else if(strcmp(str,str3)==0)
			{
				cout<<"Thank you for searching with us";
			}
			else if(strcmp(str,str4)==0)
			{
				cout<<"Thank you for searching with us";
			}
			else
			{
				 cout<<"Invalid Input..... Try Again"<<endl;
				 goto here;
			}
				
    	}
};
class C: public A
{
	public:
		
		char use1[100];
		
		void login()
		{
			
			
			cout<<endl<<"----------------------Login Again---------------------------"<<endl<<endl;
			next:
	        cout<<"Enter below details"<<endl;
	        cout<<"User name"<<endl;
	        cin>>use1;
	        /*
	        if(strcmp(use1,use)==0)
	        {
	        	cout<<"login successful";
	        }
	        else
	        {
	        	cout<<"login failed. try again";
	        	goto next;
	        }
	        */
	    }
};

int main()
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
	
	B obj;
	C obj1;
	
	
	obj.reg();
	
	obj1.login();
 
 return 0;
	
}
