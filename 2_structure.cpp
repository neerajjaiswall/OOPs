
// structure is a collection of dissimilar element 
// structure is a way to group elements 
// structure is used to create data type 
// declaring a structure dosen't consume any memory as it not yet used 
// if structure is defined globally or ( locally inside a function )
// By default all the members in structure are public 

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct book {
	int bookid;
	char title[40];
	float price;
};
 
int main () {

	book b1 = { 24, "Iam Neeraj Jaiswal ", 82.8};	// initializing while declaring 
	book b2;
	b2.bookid = 54;
	strcpy( b2.title, "string assigning method");
	b2.price=67.3;

	book b3=b2;		// we can directly copy also which is pretty good thing 
}