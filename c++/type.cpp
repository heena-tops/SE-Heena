#include <iostream>
using namespace std;

main()
{
    int a[5],i;
    
    cout<<"Enter Elements : ";
    
    for(i=0;i<5;i++)
	{
    	cin>>a[i];
	}
	
	cout<<"----------- Your array -------------"<<endl;
	
	for(i=0;i<5;i++)
	{
    	cout<<"Element "<<i+1<<" is : "<<a[i]<<endl;
	}

}
