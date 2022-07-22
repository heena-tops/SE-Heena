//Encapsulation:
/*
- encapsulation means to wrrapping up of data into a single unit
- binding of data related variables,property and methods in one class
- it's an approach to restricting some of the data structure elements 
  like field, property, methods, etc.
*/

#include<iostream>
using namespace std;
class magic{
	string name;
	public:
		void set(){
			cout<<"Enter name : ";
			cin>>name;
		}
		string get(){
			return name;
		}
};
main()
{
	magic obj;
	obj.set();
	cout<<"Your name is : "<<obj.get();
}
