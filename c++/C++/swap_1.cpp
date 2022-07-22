//call by reference :
#include<iostream>
using namespace std;

int swap(int *a, int *b);

int main()
{
	int x,y;
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	
	cout<<"values before swap : "<<x<<" "<<y<<endl;
	swap(&x,&y);
	cout<<"values after swap : "<<x<<" "<<y;
}

int swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
