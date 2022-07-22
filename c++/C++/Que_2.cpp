//Que : 2

#include<iostream>
using namespace std;

class calc
{
	int a,b;
	
	public:
	void sample(){
		
		cout<<"\n Enter value of a : ";
		cin>>a;
		
		cout<<"\n Enter value of b : ";
		cin>>b;
		
		cout<<"\n Addition : "<<a+b;
		
		cout<<"\n Subtraction : "<<a-b;
		
		cout<<"\n Multiplication : "<<a*b;
		
		if(b==0){
			cout<<"\n Zero division Error !!!";
		}
		else{
			cout<<"\n Division : "<<a/b;
		}
	}
};

main()
{
	calc obj;
	obj.sample();
}
