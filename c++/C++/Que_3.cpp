//Que : 3

#include<iostream>
using namespace std;

class matrix
{
	int a[2][2];
	
	public:
	void sample(){
		
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<"Enter element : ";
				cin>>a[i][j];		
			}
		}
		
		cout<<"\n\n------------- 2-D Matrix ------------------\n\n";
		
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<" "<<a[i][j]<<" ";
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
	obj.sample();
}
