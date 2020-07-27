#include<iostream>
#include<string>
using namespace std;

int main()
{
	try {

		int i=0;
		string s="Arithmetic";
		if(i==0)
			throw s;
	}
	catch ( string  e) {
		cout<<"Exception "<<e<<endl;
	}
	catch ( int e) {
		cout<< "Exception "<<e<<endl;
	}
	return 0;
}