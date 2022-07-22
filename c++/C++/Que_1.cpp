//Que : 1

#include<iostream>
using namespace std;

class maths
{
	int n1=0,n2=1,term,nth;
	
	public:
		
	void fibbo()
	{
		cout<<"\n Enter number of terms for fibonacci sequence : ";
		cin>>term;
		
		if(term==0){
			cout<<"\n Invalud input ! ";
		}
		
		else if(term==1){
			cout<<"\n Fibonacco sequence : "<<n1;
		}
		
		else{
			cout<<"\n Fibonacci sequence : ";
			
			for(int i=0;i<term;i++){
				nth=n1+n2;
				cout<<"\t"<<n1;
				
				n1=n2;
				n2=nth;
			}
		}	
	}
	
	void fact()
	{
		int f=1,num,i;
		
		cout<<"\n\n Enter a number : ";
		cin>>num;
		
		for(i=1;i<=num;i++){
			f*=i;
		}
		cout<<"\n\n Factorial of "<<num<<" is : "<<f;
	}
	
};

main()
{
	maths obj;
	cout<<"\n\n--------------- : Fibonacci : -------------------\n\n";
	obj.fibbo();
	cout<<"\n\n--------------- : Factorial : -------------------\n\n";
	obj.fact();	
}
