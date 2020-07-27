// A member function in one class can be a friend function in another class 

#include<iostream>
// #include<stdio.h>
using namespace std;

class A {
public:

	void fun ();
};

class B {
public:

	// friend void  A::fun ();
	// friend void  A::foo ();
	// friend void  A::fee ();

	// if we want to make all the member funcions of class A in class B as friend funcion 
	// then we can simply make class A as friend of class B

	friend class A;
};

int main() { printf("%s\n","Hello" );}