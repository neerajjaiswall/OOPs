/*
when an object of a sub-class is created then its constructor is called and before executing the constructor task it calls 
the constructor of the base class 

so order of executing construtor is from parent to child 
But call hone ka order from child to parent 
*/

/*
jab child ka object destroy hone wala hoga usse phle uska destructor call hoga aur wo phle pura execute hoga phr last 
me parent ka destructor call krega to call hone ka order to constructor jaisa he hai mgr execute phle child ka destructor hoga
*/
#include<iostream>
class A  {
	int a;
public:
	A ( int x) {
		a=x;
	}

	void geta() {
		std::cout<<a<<" ";
	}

	~A () { }
};

class B : public A {
	int b;
public:
	B ( int x, int y) : A (x) {
		b=y;
	}

	void getab () {
		geta();
		std::cout<<b<<"\n";
	}

	~B () { }
};

int main () {
	B obj ( 2, 3);
	obj.getab();
}