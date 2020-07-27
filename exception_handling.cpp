#include<iostream>
#include<exception>
using namespace std;
int main() {

	int a=-1;
	cout<<"Before exception "<<endl;

	try {
		cout<<"Inside try block \n";
		if(a<0)
			throw 1;
		cout<<"After throwing "<<endl;
	}
	catch(int x) {}
	cout<<"After catch \n";

}