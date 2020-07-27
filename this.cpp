/*
A pointer that contains address of an object is called an object pointer 

this is a keyword 
this is a local obejct pointer in every instance member function containing address of the caller object 
this pointer can't be modified 
it is used to refer caller object in member function
*/

class A {
	int a,b;

public:
	void set( int a, int b) {
		this-> a= a;
		this-> b= b;
	}
};

int main() {
	A obj;
	A *p;
	obj.set(2,3);		// this is same as p->set(2,3) and 'p' here is object pointer 	 
}