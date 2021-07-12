#include<iostream>
using namespace std;
// it is an instance member funciton 
// the name of destructor is same as the name of class but preceed by tilde (~) symbol 
// destrutor can never be static 
// it dosen't have any return type 
// takes no argument ( overloading is not possible )
// it is invoked automatically when object is going to destory
// it is the last function that is called before object is going to destroy

// Destructor is important because it is used  to release resources allocated to object before object get destroyed.

class Complex {
	int a,b;

public:
	~Complex() {
		cout<<"destructor is called ! ";	// this is printed it means destructor is called 
	}

};

void fun() {
	Complex obj;	// object is created in this funcion which is a local function 
}

int main() {

	fun();			// when this functino ends then the object is destroyed so then destructor will be called implicitly	
}