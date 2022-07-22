// class template

#include<iostream>
using namespace std;

template <typename T>

class sample
{
	T first,second;
	public:
	sample(T a, T b)
	{
		first =a;
		second =b;	
	}	
	
	void add();
	void mul();
};

template <typename T>
void sample<T> :: add()
{
	cout<<"Addition : "<<first+second<<endl;	
} 

template <typename T>
void sample<T> :: mul()
{
	cout<<"Multiplication : "<<first*second<<endl;
}

main()
{
	sample <int> obj(12,2);
	
	obj.add();
	obj.mul();
}
