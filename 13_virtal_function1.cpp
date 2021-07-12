
// overriding ki problem ko solve karne ke liye he virtual function hai aur wo problem tab aati hai jab parent class ka pointer derived class ke object ka address contain kare 
// A pointer of parent type can store the address of object of its derieved classes 
// virtual functions ki late binding hoti hai 

// Early binding : compiler will decide 
// Late binding : decided at runtime 	
#include<iostream>

class A {
public:
	virtual void f1 () {

	}
};

class B : public A {
public:
	void f1 () {

	}
};

int main() {

	A *p;			// this a pointer of A type 
	B obj;			// this is a object of B type 
	p = &obj;       // p in now storing the address of obj which is of type A 

	p->f1();		// now we are calling the function from pointer 'p' which is of A type so at compiler time compiler 
				// don't know that which type of address the pointer is storing so it will just see the type of pointer 
				// which is type 'A' and call the funcion form parent class this is called early binding. 
				// but we want function of B class to be called this is only possible if we can somehow achieve late binding that is 
				// at runtime they came to know that which type of address 'p' is having so then, it will call function corresponding to that type 
}				// for late binding of a function just add a virtual keyword prefix to it in the parent class 
				// so now the funciton of B type will be binded. 
