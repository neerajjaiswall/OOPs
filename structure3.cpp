
// This method of binding method and members in a single unit is known as encapsulatoin 

#include<iostream>
using namespace std;

struct book
{
	int bookid;
	char title [40];
	float price;

	void input() {										// using function inside structure itself 
		cin >> bookid >> title >> price;				// now we can get rid of b.bookid things 
	}

	void show() {
		cout<< bookid << " " << title << " " << price;
	}
};

int main () {

	book b1;
	b1.input();
	b1.show();

return 0;
}