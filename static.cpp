#include<bits/stdc++.h>
using namespace std;

class New {

int x, y;           // this is called instance of a class because it belongs to instance
public:
	static int a,b; // this is called static member variable/ class variable and they have only single copy
					// we can access static member without the use of object also as it is not depend on objects using membership label
public:
	void set(int a, int b) {
		this->a=a; this->b=b;
	}
	void get () {
		cout<<a<<" "<<b<<endl;
	}
};
int New::a;     // this is static memeber defination
int New::b;     // New::b is known as membership label
int main() {
	New obj, obj2;
	obj.set(2,3);
	obj.get();
	obj2.get();
	// cout<<obj.a<<" "<<obj.b << endl;
}