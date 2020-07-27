
#include<iostream>
using namespace std;

struct book
{
private:
	int bookid;
	char title [40];
	float price;

public:
	void input() {										
		cin >> bookid >> title >> price;	

		if (bookid < 0)
			bookid *= -1;			
	}

	void show() {
		cout<< bookid << " " << title << " " << price;
	}
};

int main () {

	book b1;
	// b1.bookid = -100;		// gives error 
	b1.input();
	b1.show();

return 0;
}