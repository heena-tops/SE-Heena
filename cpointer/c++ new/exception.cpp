#include<iostream>
using namespace std;

float div(float a, float b)
{
	if(b==0)
	{
		throw "Zero Division Error !!!";	
	}
	
	return a/b;
}

main()
{
	float num1,num2;
	cout<<"Enter two values : ";
	cin>>num1>>num2;
	
	try
	{
		cout<<"Division : "<<div(num1,num2);
	}
	catch(const char* e)
	{
		cout<<e;
	}
	
}
