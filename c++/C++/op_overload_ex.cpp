// operator overloading 

#include<iostream>
using namespace std;

class One
{
	int first,second;
	
	public : 
	
	One(int a=0, int b=0)
	{
		first = a;
		second = b;
	}		
	
	
	// to overload the operator '+'
	One operator +(One const &obj)
	{
		One temp;
		
		temp.first = first+obj.first;
		temp.second = second+obj.second;
		
		return temp;

	}
	
	void display()
	{
		cout<<"First = "<<first<<endl<<"Second = "<<second;
	}
};

int main()
{
	int x,y;
	
	cout<<"Enter two no : ";
	cin>>x>>y;
	
	int p,q;
	cout<<"Enter two no : ";
	cin>>p>>q;
	
	One obj1(x,y);
	One obj2(p,q);
	One obj3 = obj1+obj2;
	
	obj3.display();
	
	return 0;
}
