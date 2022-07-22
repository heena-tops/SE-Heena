#include<iostream>
using namespace std;

class arithmatic
{
	int a,b;
	public:
	arithmatic(){
		cout<<"Enter two numbers : ";
		cin>>a;
		cin>>b;
		
		cout<<"\n Addition = "<<a+b;
		cout<<"\n Subtraction = "<<a-b;
		cout<<"\n Multiplication = "<<a*b;
		cout<<"\n Division = "<<a/b;
	}
};

main()
{
	arithmatic obj;
}







