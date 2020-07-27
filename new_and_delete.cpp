
// new keyword is used for implentating dynamic memory allocation 
// the pointers that are created using new keyword lasts till the end of the program so we need to delete them for this delete keyword is used 

#include<iostream>
using namespace std;

int main(){

int *p = new int ; 		// one variable is created of int type and its address is in 'p'

int n; 
cin>>n;
int *arr = new int [n];	// array is created and its base address is stored in arr


delete p;
delete []arr;
}