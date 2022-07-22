//Exception Handling : 

/*
	Exception Handling in c++ is a process to handle runtime errors.
	---> Use to maintain the flow of application even after a runtime error

	---> it's an event or object which is thrown at runtime.
	---> All Exceptions are derived from "std::exception" class.
	
	---> It is a runtime error which can be handled.
	---> If we don't handle the exception, it prints exception message 
		 and terminate the progrme.  

*/

#include<iostream>
using namespace std;

float division(int x, int y)
{
	if(y==0){
		throw "Can not divide by zero !";
	}
	return x/y;
}

main()
{
	int a,b;
	
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	
	try
	{
		float ans = division(a,b);
		cout<<"\n Ans = "<<ans;	
	}	
	catch(const char* e)
	{
		cout<<"\n Error = "<<e;
	}
}


