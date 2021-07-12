
// Reference variable is an internal pointer 
// referene means actually address 
// reference variable must be initialized during declaration 
// pointer can be updated but reference variable can't 


#include<iostream>
using namespace std;

int sum(int *a, int *b) {
	return *a = *a+*b;
}

int main() {
	int a=1, b;
	int *x;			// this is a pointer variable used to point variables 
	x=&a;
	cout<<*x<<endl;
	(*x)++;			// brackets are used because ++ has higher precedence than *
	cout << *x <<endl;

	int &y= a;		// this is a reference variable 
					// now it will work as a normal variable..
	cout<<y<<endl;
	y++;
	cout<<y<<endl;

	int i=2, j=3;
	cout << sum(&i, &j) << endl;
	cout << i << endl;
}