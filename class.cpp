// The only difference between class and structure is that:
/*
	The members of structures are by default public and 
	The members of class are by default private 
	all other concepts are same for both class and structures.
*/  

#include <iostream>
using namespace std;

class Complex {

private:
	int a,b;
public:
	void  get_data ( int x, int y) {
		a=x; b=y;
	}

	void set_data () {
		cout<< a << " " << b << endl;
	}

Complex add ( Complex obj) {
	Complex temp;
	temp.a = a + obj.a;
	temp.b = b + obj.b;

	return temp;
}

};

int main() {
	Complex obj1, obj2, obj3;
	obj1.get_data(3,4 );
	 obj1.get_data(3,4 );
	 obj3 = obj1.add (obj2);
	 obj3.set_data();
}
