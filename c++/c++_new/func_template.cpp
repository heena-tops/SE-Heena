#include<iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
	return a+b;
}

main()
{
	cout<<"Addition : "<<add<float>(12,2.2);
}
