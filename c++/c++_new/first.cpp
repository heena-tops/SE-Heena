#include<iostream>
using namespace std;

int main()
{

	int a[5],sum=0;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number : ";
		cin>>a[i];
		
		sum+=a[i]; //sum=sum+a[i]
	}
	
	
	return 0;
}
