

/*
It is not a member function 
it is declared inside the class using friend keyword but must be defined outside the class 
Friend function can access member of class to which it is friend 
Friend function can access members of class directly 
It has no caller object 
It should not be defined with membership label 
It can be declared with any access modifier as it is not member of class so it dosen't matters

Advantages :
# Friend function can become friend to more then one class and access private members which even members funcion can't do 
# Can be used for operator overloading 
# 
*/

#include<iostream>
using namespace std;

class Complex {

private:
	int a, b;

public:
	void  get_data ( int x, int y) {
		a=x; b=y;
	}

	void set_data () {
		cout<< a << " " << b << endl;
	}

	friend Complex operator++(Complex);		// friend funcion can be of any datatype
};

Complex operator++ (Complex obj ) {
	Complex temp;
	temp.a = ++ obj.a;
	temp.b = ++ obj.a;
	return temp;
}

int main () {
	Complex obj1, obj2;
	obj1.get_data ( 2, 3);
	obj2= ++(obj1);
	obj2.set_data();
	obj1.set_data();
}



