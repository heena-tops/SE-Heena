#include<iostream> 
using namespace std;
main()
{
	int a,b;
	cout<<"Enter first number :";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	
	cout<<"\nAddition"<<"="<<a+b;
	
	cout<<"\nSubtraction"<<"="<<a-b;
	
	cout<<"\nMultiplication"<<"="<<a*b; 
	
	cout<<"\nModulo"<<"="<<a%b;
	
	if(b>0)
	{
		cout<<"\nDivision"<<"="<<a/b;	
	}
	else
	{
		cout<<"\nDivision not possible since denominator is zero !!";
	}
}
