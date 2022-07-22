//Constructor overloading
#include<iostream>
using namespace std;

class Student{
	public:
		Student(){
			cout<<"Hello\n";
		}
		Student(int marks, int age){
			cout<<"\nYour score is : "<<marks;
			cout<<"\nYour age is : "<<age;
		}
		Student(char name[20],char sub[20]){
			cout<<"\n\nYour name is : "<<name;
			cout<<"\nYour subject is : "<<sub;
		}
};

main()
{
	Student s;
	Student obj(45,12);
	Student info("hana","python");
}
