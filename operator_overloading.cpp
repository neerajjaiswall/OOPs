
// when an operator is overloaded with multiple jobs then it is operator overloading 
// It is a way to implement compile time polymorphism
// you can overload all operators except sizeof and ?:

#include<iostream>
using namespace std;

class Complex
{
public:
	int a,b;
public:
	Complex operator + ( Complex obj ) {
		Complex temp;
		temp.a= a + obj.a;
		temp.b= b + obj.b;

		return temp;
	}
	
};

int main() {
	Complex obj1;
	Complex obj2;
	obj1.a=2,obj1.b=4;
	obj2.a=5,obj2.b=8;

	Complex obj3= obj1 + obj2;		// is same as: obj1.operator+ ( obj2 ) 
	//this is binary operator and for binary operator the caller object is always the left one here obj1

	// for unary operator like obj3 = -obj2 here caller object is obj2 itself: obj2.operator-()
	cout<< obj3.a << " "<< obj3.b<<endl;
}