/*
Try and Catch are like coupes no one can be alone.
If you write try then you must write catch immediately after it 
we can write try and then more than one catch but catch needs to be continuous

	try{

	}
	catch(int a){

	}
	catch(double a){

	}
	
But we can use throw keyword even without try and catch in that case:
	when throwiing there is no matching catch block to handle that throw then automatically a 
	function named terminate is called and it further calls abort due to which our program ends

If we are throwing int and catching double then also terminate function is called 

It will sequencially check for matching catch block and if any catch block is matched then after that no catch block is checked.
*/

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
	catch(int x) {}					// this catch block will be matched only if int type of value is thrown 

	catch(double a) {}				// this catch will be matched only if double type of value is throw from try block

	// If we want to catch every possible type of value that is thrown from try block using throw keyword
	// then we can use ... in catch like below

	catch(...){}
	cout <<"After catch \n";

}