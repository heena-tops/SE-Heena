#include"iostream"
using namespace std;

main()
{
	int a,b,c;
	
	cout<<"Enter first number : ";
	cin>>a;
	
	cout<<"Enter second number : ";
	cin>>b;
	
	cout<<"Enter third number : ";
	cin>>c;
	
	cout<<"\n";
	
	if(a>b){
		if(a>c){
			cout<<a<<" is largest";
		}
		else{
			cout<<c<<" is largest";
		}
	}
	else{
		if(b>c){
			cout<<b<<" is largest";
		}
		else{
			cout<<c<<" is largest";
		}
	}
}
