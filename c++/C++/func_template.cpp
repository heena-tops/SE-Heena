//function template 

#include<iostream>
using namespace std;

template <class T>
T add(T a, T b);


int main()
{
	cout<<"Addition : "<<add<float>(1.2,45.0);
	
	return 0;
}

template <class T>
T add(T a, T b)
{
	return a+b;
}
