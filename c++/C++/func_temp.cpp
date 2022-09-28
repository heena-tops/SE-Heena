#include<iostream>
using namespace std;

template <class T>
T add(T a, T b);


int main()
{
	int a;
	float b;
	
	cout<<"Enter value of a : ";
	cin>>a;
	
	cout<<"Enter value of b : ";
	cin>>b;
	
	cout<<"Result in int : "<<add<int> (a,b)<<endl;
	cout<<"Result in float : "<<add<float> (a,b);
		
	return 0;
}

template <class T>
T add(T a, T b)
{
	return a+b;
}
