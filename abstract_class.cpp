// A do nothing function is a pure virtual function 
// A class containing atleast one pure virtual function is an abstract class 
// we cannot instantiate abstract class means its object cannot be created 
// for using abstract class we need to create its sub-class and we have to override all pure virtual functions which are there in parent class or again make them pure virtual functions 

class Person {
public:

	virtual void fun ()=0;		// pure virtual function 
	void f1() { }
};

class Student : public Person {

public:
	void fun () {}				// or make it pure virtual: virtual void fun()=0
};

int main() {}