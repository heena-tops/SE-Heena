#include<iostream>
using namespace std;

class Add
{
	
	int first,second;
	
	public:
	Add(int a=0, int b=0)
	{
		first=a;
		second=b;
	}
	
	Add operator +(Add const &obj)
	{
		Add temp;
		temp.first=first+obj.first;
		temp.second=second+obj.second;
		return temp;
	}
	
	void display()
	{
		cout<<"First = "<<first<<endl;
		cout<<"Second = "<<second<<endl;	
	}	
};

main()
{
	Add obj1(2,3),obj2(3,2);
	Add obj3=obj1+obj2;
	obj3.display();
}

//#include<iostream>
//using namespace std;
//
//class Complex {
//private:
//	int real, imag;
//public:
//	Complex(int r = 0, int i = 0) {real = r; imag = i;}
//	
//		Complex operator + (Complex const &obj) {
//		Complex res;
//		res.real = real + obj.real;
//		res.imag = imag + obj.imag;
//		return res;
//	}
//	void print() { cout << real << " + i" << imag << '\n'; }
//};
//
//int main()
//{
//	Complex c1(10, 5), c2(2, 4);
//	Complex c3 = c1 + c2;
//	c3.print();
//}

