#include<iostream>
using namespace std;

float div(int a, int b)
{
	if(b==0)
	{
		throw "Zero division Error !!!";
	}
	
	return a/b;
}

int main()
{
	float a,b;
	
	cout<<"Enter two numbers : ";
	
	cin>>a>>b;
	
	try
	{
		cout<<"Division : "<<div(a,b);
	}
	catch(const char* e)
	{
		cout<<"ERROR : "<<e;
	}
	
	return 0;
}
