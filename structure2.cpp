#include<iostream>
using namespace std;

struct book {
	int bookid;
	char title[40];
	float price;
};

book get_input () {

	book b;
	cout<<" enter bookid, title and price of the book \n";
	cin>>b.bookid>>b.title>>b.price;

	return b;
}

void show (book b) {

	cout<<b.bookid <<" "<<b.title <<" "<<b.price<<endl;
}
int main() {

	book b1;
	b1= get_input();
	show(b1);
}