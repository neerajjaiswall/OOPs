#include<iostream>
using namespace std;

int sum ( int a, int b) {	// these are formal arguments 
	return a+b;
}

int main() {

	int x=4, y=6;
	int s= sum(x, y);		// these are actual arguments 
	cout<< s <<endl;		
}

// when formal arguments are ordinary variale like 'int a ' then it is call by value 
// when formal arguments are pointer variables then it is call by address =>  formal: sum (int *a, int b), actual: sum(&a, &b)
// when formal argumants are reference variables then it is call by reference => formal: sum (int &a ,int &b), actual: sum(a, b)