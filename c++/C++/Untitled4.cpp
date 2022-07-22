#include<iostream>
using namespace std;
class Sample 
{
	int num = 100;
	
	friend void display(Sample obj);	
};
void display(Sample obj)
{
	obj.num = 150;
	cout<<"\n num = "<<obj.num;
}
main()
{
	Sample obj;
	display(obj);
}
