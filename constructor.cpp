// constructor is a member function of a class 
// its name is same as the name of class 
// it has no return type 
// its instance member funcion and cant be static 
// Constructor is implicitly invoked when object is created 
// constructor is used to solve the problem of initialization

// if we are not creating any constructor then two constructor are created by compiler itlsef default and copy constructor 
// if we will not create copy constructor then it is made by compiler 
// if we create copy constructor then no default constructor is created by compiler 

class A {

int a,b;

public :
	A () {
		a=0, b=0;
	}

	A (int x){
		a=x;b=0;
	}

	A ( int x, int y ) {		// this is knwon as constructor overloading and this one is paramaterised constructor 
		a=x; b=y;
	}

	A ( const A &obj) {		// this is copy constructor 
		a= obj.a;  			// here a and b belongs to the object for which constructor is being called here it is obj5 
		b= obj.b;
	}
};

int main()
{
	A obj1, obj2 (3, 4);
	A obj3 = A ( 4, 5) ;	// another way to create object
	A obj4 = 8;				// this is same as : A obj4(8)

	A obj5=obj2;			// here copy constructor is called by obj5 it is same as: A obj5(obj2);
}

