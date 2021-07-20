// when ever any object of child class is created then constructor of both object and base class is called. 
// first the constructor of base class is executed and then of the derived class.

#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    A () {
        cout << "Yes object is created with default constructor !";
    }
};

class B: public A {
    public: 
    B() {
        cout << "this is constructor of derived class.";
    }
};

int main() {
    B obj;    
}