
// Reference variable is an internal pointer 
// referene means actually address 
// reference variable must be initialized during declaration 
// pointer can be updated but reference variable can't 


#include<iostream>
using namespace std;

int main() {
	int a=1, b;
	int *x;			// this is a pointer variable used to point variables 
	x=&a;
	cout<<*x<<endl;
	*x++;
	cout << *x <<endl;

	int &y= a;		// this is a reference variable 
					// now it will work as a normal variable..
	cout<<y<<endl;
	y++;
	cout<<y<<endl;
}