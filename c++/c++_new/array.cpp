//class and pointers

#include<iostream>
using namespace std;

class A
{
	public:
		
		int id,a[5];
		string name;
		
		void input()
		{

			cout<<"Enter id : ";
			cin>>id;
			
			cout<<"Enter name : ";
			cin>>name;
			
			for(int i=0;i<5;i++)
			{
				cout<<"Enter element : "; 
				cin>>a[i];	
			}	
		}
		
		void display()
		{
			cout<<"Id : "<<id<<endl;
			
			cout<<"Name : "<<name<<endl;
			
			for(int i=0;i<5;i++)
			{
				cout<<"Marks : "<<a[i]<<endl;	
			}	
		}
};

main()
{
	A obj;
	
	
	A *ptr;
	
	ptr = &obj;
	
	ptr->input();
	ptr->display();
}
