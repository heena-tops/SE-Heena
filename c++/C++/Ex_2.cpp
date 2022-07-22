#include<iostream> 
using namespace std;
main()
{
	int marks;
	cout<<"Enter your marks : ";
	cin>>marks;
	
	if(marks>70)
	{
		cout<<"\n Distinction ----Congratulations :)";	
	}
	else if(marks>60&&marks<=70)
	{
		cout<<"\n First Class";
	}
	else if(marks>50&&marks<=60)
	{
		cout<<"\n Second Class";
	}
	else if(marks>40&&marks<=50)
	{
		cout<<"\n Third Class";
	}
	else if(marks>35&&marks<=40)
	{
		cout<<"\n Pass Class";
	}
	else
	{
		cout<<"Fail !!!";
	}
}
