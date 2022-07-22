//polymorphism : method overloading
#include<iostream>
using namespace std;
class abc{
	public:
		void display(){
			cout<<"hello";
		}
		void display(int a, int b){
			cout<<"\n a = "<<a;
			cout<<"\n b = "<<b;
		}
		void display(int num){
			cout<<"\n num = "<<num;
		}
};
main()
{
	abc obj;
	obj.display();
	obj.display(23,34);
	obj.display(786);
	
}
