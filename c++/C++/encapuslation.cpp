//Encapsulation

#include<iostream>
using namespace std;
class Sample
{
	int num;
	public:
	void set(int n) //use to set the value----> setter method 
	{
		num	= n;
	}	
	int get() //use to get the value -----> getter method
	{
		return num;
	}
};
main()
{
	Sample obj;
	obj.set(10);
	cout<<"\n num = "<<obj.get();
}
