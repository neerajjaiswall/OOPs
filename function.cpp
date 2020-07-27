// Function is a way to achieve modularization 
// two types defined or predefined functions 
// uses of function : easy to read, easy to modify, avoids rewriting of same code, easy to debug but the best use is :
// better memory utilization 
// because function will only get memory when it is called and when it is executed then its memory is released 


#include<iostream>
using namespace std;

int  main() {
	void fun ();
	void fun( int );
	void fun(float );			// prototype or local declaration means only main function can call it 

	float x=8.0;
	int a, b;
	fun(4);	
	fun(x)	;			// function call 
}

void fun (int x) {							// function defination 
	cout<<"You entered in fun ! ";
}
void fun(float x) {
	cout<<" this is float one ! ";
}

//  The functions which only differ by  return type can't  be overloaded !