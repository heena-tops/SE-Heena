#include<iostream>
using namespace std;

main()
{
	int a,num,e_sum,o_sum,even,odd;
	cout<<"\n enter any ten numbers : ";
	do{
		cin>>num;
		
		if (a%2==0){
			even+=1;
			e_sum+=num;
		}
		else{
			odd+=1;
			o_sum+=num;
		}
		a++;
	}while(a<10);

	cout<<"\nEven numbers are : "<<even;
	
	cout<<"\nOdd numbers are : "<<odd;
		
	cout<<"\nSum of even numbers : "<<e_sum;
	
	cout<<"\nSum of odd numbers : "<<o_sum;
}
