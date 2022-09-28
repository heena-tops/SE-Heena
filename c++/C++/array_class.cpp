//Array of a class 

#include<iostream>
using namespace std;

class A
{
	public:
		
		int a[5];
		string name;
		
		void input()
		{
			cout<<"Enter your name : ";
			cin>>name;
			
			for(int i=0;i<5;i++)
			{
				cout<<"Enter a number : ";
				cin>>a[i];
			}
		}
		
		void display()
		{
			
			
			cout<<"Name = "<<name<<endl;
			
			for(int i=0;i<5;i++)
			{
				cout<<"subject "<<i+1<<" Marks = "<<a[i]<<endl;
			}
		}
};

int main()
{
	A obj[2];
	
	for(int i=0;i<2;i++)
	{
		obj[i].input();
		
	}
	cout<<"\n\n----------------------Student Info ------------------\n\n";
	for(int i=0;i<2;i++)
	{
		obj[i].display();
	}
	
	
	return 0;
}
