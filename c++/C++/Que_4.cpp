#include<iostream>
using namespace std;

class matrix
{
	int m1[2][2],m2[2][2];
	
	public:
	void input(){
		
		cout<<"\n ------- Enter Elements of First Matrix -------- \n";
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<"\n Enter element : ";
				cin>>m1[i][j];	
			}
		}
		
		cout<<"\n ------- Enter Elements of Second Matrix -------- \n";
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<"\n Enter element : ";
				cin>>m2[i][j];	
			}
		}
	}
	
	void display(){
		cout<<"\n -------------------------- Display ------------------------------- \n";
		
		cout<<"\n ----------------- First Matix ------------------- \n";
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<m1[i][j]<<" ";
				
				if(j==1){
					cout<<"\n";
				}
			}
		}
		
		cout<<"\n ----------------- Second Matrix ---------------- \n";
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<m2[i][j]<<" ";
				
				if(j==1){
					cout<<"\n";
				}
			}
		}
		
		cout<<"\n ----------------- Addition of both Matrix ---------------- \n";
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<m1[i][j]+m2[i][j]<<" ";
				
				if(j==1){
					cout<<"\n";
				}
			}
		}
	}
};

main()
{
	matrix obj;
	obj.input();
	obj.display();
}
