// Template : 

/*
	Template is a simple and yet very powerful tool in c++
	--> The simple idea is to pass the data type as a parameter
		so that we don't need to write same code for different data type 
		
		e.g : if any one wants to sort data then rather than writing and maintaining multiple codes,
				we just use sort() and pass the data type as a parameter
				
	--> There are two type of template:
		1. Class template
		2. Function Template
	
*/

// Function Template : 
#include<iostream>
using namespace std;

template <class T>
T findMax(T a, T b,T c)
{
	if(a>b){
		if(a>c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if(b>c){
			return b;
		}
		else{
			return c;
		}
	}
}

main()
{
	int choice;
	
	cout<<"\n\n----------MENU------------\n\n";
	cout<<"\n Press 1 for Max ";
	cout<<"\n Press 2 for Min ";
	cout<<"\n\n---------> Enter Your Choice : \n\n";
	cin>>choice;
	
	switch(choice){
		case 1:
			int num1, num2, num3, result;
			cout<<"Enter number 1 : ";
			cin>>num1;
			cout<<"Enter number 2 : ";
			cin>>num2;
			cout<<"Enter number 3 : ";
			cin>>num3;
			result = findMax<float>(num1,num2,num3);
			cout<<"\n Result = "<<result;
			break;
			
		case 2:
			float f_num1, f_num2, f_num3, f_result;
			cout<<"Enter number 1 : ";
			cin>>f_num1;
			cout<<"Enter number 2 : ";
			cin>>f_num2;
			cout<<"Enter number 3 : ";
			cin>>f_num3;
			f_result = findMax(f_num1,f_num2,f_num3);
			cout<<"\n Result = "<<f_result;
			break;
			
		default:
			cout<<"\n INVALID INPUT !";
	}
}
