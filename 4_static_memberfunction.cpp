#include<iostream>
using namespace std;

class New {
	static int a,b; 			// by default private		
public: 

	static void get (int aa, int bb) {	// the need of this function is only for accessing private static members without objects
		a=aa; b=bb;						// they can access only static members of the class
	}
};

int New :: a;
int New :: b;

int main() {

	New obj;
	New :: get(2, 3);		// static members can be accessed without use of objects also 

}