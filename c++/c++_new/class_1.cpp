//array of a class

#include<iostream>
using namespace std;

class Sample
{
	public :
	
	int a[3],sum=0;
	
	void input()
	{
		for(int i=0;i<3;i++)
		{
			cout<<"Enter a number : ";
			cin>>a[i];	
			sum+=a[i];
		}
	}
	
	void display()
	{
		cout<<endl<<"Sum = "<<sum;	
	}	
};

int main()
{
	Sample obj;
	
	obj.input();
	obj.display();
}
