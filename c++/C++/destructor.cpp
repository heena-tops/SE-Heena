//destructor
/*
destructor is automatically called when the object of a class 
is destroy. 

syntax : ~student(){ ..... }

always public 
and name of the destructor must be same as class name

e.g. : class sample{
			public: 
				sample(){  //---> constructor 
					//statements.......
				}
				
				~sample(){  //----->destructor 
					//statements ............
				}
	
	};
*/

#include<iostream>
using namespace std;

class sample{
	public:
		sample(){
			cout<<"Hello \n";
		}
		~sample(){
			cout<<"\n\n------Thank You--------\n\n";
		}
};

main(){
	sample obj;
}






