#include<iostream>
using namespace std;

class bank
{
	int ac_no,balance;
	char name[20],ac_type[50];
	
	public:
	void input(){
		cout<<"\n\n ---------------------Welcome to Indian Bank ------------------- \n\n";
		cout<<"Enter Account number : ";
		cin>>ac_no;
		
		fflush(stdin);
		
		cout<<"Enter Name : ";
		gets(name);
		
		cout<<"Entre Account type : ";
		gets(ac_type);
		
		cout<<"Enter Balance : ";
		cin>>balance;
	}
	
	void display(){
		cout<<"\n\n ---------Display Info. ---------------\n\n";
		
		cout<<"\n Account No. = "<<ac_no;
		cout<<"\n Name = "<<name;
		cout<<"\n Accoount Type = "<<ac_type;
		cout<<"\n Available Balance = "<<balance;
	}
};

main()
{
	bank obj;
	obj.input();
	obj.display();	
}
