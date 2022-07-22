// Templates :  class template

#include<iostream>
using namespace std;

template <class T>
class Sample
{
	T first,second;
	public: 
		Sample(T a, T b)
		{
			first = a;
			second = b;
		}
		void add();
		void mul();
};

template <class T>
void Sample<T> :: add() 
{
	cout<<"Addition : "<<first+second<<endl;
}

template <class T>
void Sample<T> :: mul()
{
	cout<<"Multiplication : "<<first*second<<endl;
}


main()
{
	Sample<float> obj(12.3,2.4);
	obj.add();
	obj.mul();
}
