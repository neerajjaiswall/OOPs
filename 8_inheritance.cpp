/*
If there is is-a relationship between two entities then there will be inheritance.	

It is a process of inherting properties and behaviours of parent class into new class
eixsiting class = parent class = old class = base class = super class 
new class = derived class = child class

# Syntax: 

	class Base_class {

	};

	class Derived_class: visibility_mode Base_class {

	};

# Types of Inheritance:

	X ---> Y, means X is a parent of Y.

	1) Single Level  A ---> B

	2) MultiLevel    A ---> B ---> C 

	3) Multiple      A ---> B <--- C

						  |---> B
	4) Hierarchical  A ---| 
						  |---> C

	5) Hybrid -      Mixture of more than one inheritance

# Access Modifiers:

	Public - Accessible to everyone
	Private - Accessible to only the members who are inside the class. 
	Protected - Accessible to derived class but, not accessible outside the class.

# Visibility Modes:

	Private   - * = private
	Protected - private = private, protected = protected, public =  protected
	Public    - as it is inherited nothing will change.
*/




// is a relationship is always implemented as a public inheritance

class A {
	int a,b;
public:
	void fun();
};

class B : public A {
	void foo();
};

int main(){}