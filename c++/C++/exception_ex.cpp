#include<iostream>
using namespace std;

float div(float a, float b)
{
	if(b==0)
	{
		throw "Zero Division Error !!!";
	}
}

main()
{
	float a,b;
	
	cout<<"enter two numbers : ";
	cin>>a>>b;
	
	try
	{
		cout<<"\nDivision : "<<div(a,b);
	}
	catch(const char* e)
	{
		cout<<"Error : "<<e;
	}
}
