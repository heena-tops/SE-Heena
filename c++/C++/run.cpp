#include<iostream>
using namespace std;

void swap(int &i, int &j)
{
	int t;
	
	t=i;
	i=j;
	j=t;
}

int main()
{
	int a,b;
	
	cout<<"Enter two nums : ";
	cin>>a>>b;
	
	swap(a,b);
	
	cout<<endl<<a<<endl<<b;
	
	return 0;
}
