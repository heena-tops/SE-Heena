// Array of Class

#include<iostream>
using namespace std;

class Student
{
	
	char name[20];
	int m[3],i;
	
	public:
	void input()
	{
		fflush(stdin);
		
		cout<<"\nEnter name : ";
		gets(name);
		
		
		for(i=0;i<3;i++)
		{
			cout<<"Enter marks of subject "<<i+1<<" : ";
			cin>>m[i];
		}
		
	}
	
	void display()
	{
		
		cout<<"Name : ";
		puts(name);
		
		for(i=0;i<3;i++)
		{
			cout<<"Marks of subject "<<i+1<<" : "<<m[i]<<endl;
		}
		
	}
};

main()
{
	Student obj[3];
	int j;
	
	for(j=0;j<3;j++)
	{
		obj[j].input();
	}
	 
	cout<<"\n\n-----------Display----------\n\n";
	
	for(j=0;j<3;j++)
	{
		obj[j].display();
	}
	
}
