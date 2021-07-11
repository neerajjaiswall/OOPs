/*
if two same functionns are there one in child class and one in parent class 
	if everyting is same name, prototype, return type but implementation is different then it is method overriding 
	if name is same but argumant is different then it is method hiding 
if two functions with same name are in same scope then it is method overloading 

*/

class A {

	int a;
public:
	void f1 () {}
	void f2 () {}
};

class B : public A {
	int b;
public:
	void f1 () {} 		// method overriding 
	void f2 ( int x) {}  // method hiding 
};

int main() {
	B obj;
	obj.f1() ;		// B : compiler will  first look the type of obj here it is of B type so first it will go in B type
					//and searches f1() it is found so it will not go to parent class  
  //obj.f2() ; 		// error : go to B and found f2() but parameters are different so gives error 
	obj.f2(3);		// B : becaue it is exactly matching the f2() in class B 
}