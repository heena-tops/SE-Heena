#include<iostream>

using namespace std;

main()
{
    int age;
    
    char name[20];
    
    cout<<"Enter your age : ";
    cin>>age;
    
    fflush(stdin);
    
    cout<<"Enter your name : ";
    gets(name);
    
    cout<<"\n\n----------Display Info -------------\n\n";
    
    cout<<"Age : "<<age<<endl;
    cout<<"Name : "<<name;

}
