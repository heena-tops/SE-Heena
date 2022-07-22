// recursive function

#include<iostream>
using namespace std;

int fact(int a)
{
	if(a<=0)
	{
		return 1;
	}
	
	return a*fact(a-1);
}

int main()
{
	int x;
	
	cout<<"Enter a number : ";
	cin>>x;
	
	cout<<"Factorial : "<<fact(x);
	
	return 0;	
}
