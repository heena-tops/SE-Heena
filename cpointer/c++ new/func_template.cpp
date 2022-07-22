//function template :

#include<iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
	return a+b;
}

main()
{
	cout<<"Addition : "<<sum<int>(12,2)<<endl;

	cout<<"Addition : "<<sum<float>(1.2,3.3);
}
