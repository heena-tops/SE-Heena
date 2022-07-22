// polymorphism : operator overloading

#include<iostream>
using namespace std;

class Add
{
	int first,second;
	
	public:
	
	Add(int a=0, int b=0)
	{
		first=a;
		second=b;	
	}	
	
	Add operator +(Add const &obj)
	{
		Add temp;
		temp.first=first+obj.first;
		temp.second=second+obj.second;
		return temp;
	}
	void display()
	{
		cout<<"First = "<<first<<endl;
		cout<<"Second = "<<second<<endl;
	}
};

main()
{
	Add obj1(1,2),obj2(2,3);
	Add obj3=obj1+obj2;
	obj3.display();
}
