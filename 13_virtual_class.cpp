#include<bits/stdc++.h>
using namespace std;

// a problem occurs when we use both hierchical inheritance and multiple inheritance let's see what is the problem.
/*
                A

            B       C

                D
*/
/*
Here A is the base class and B and C are inheriting A that is known as hierchical inheritance.
That means B and C will get access to all the members of class A except constructors and destructors.

Now if D will try to inherit both B and C then there is an ambiguity, because B and C both are having members of class A 
and now if D inherits both B and C then the members of A will be inherited two times in D.
*/


class A {
    public:
        int a, b;
        void fun() {
            cout << "Lets see it funs or not!";
        }
};

class B: virtual public A {

};

class C: virtual public A {

};

class D: public B, public C {

};
int main() {
    D obj;
    obj.fun();                  // fun is ambiguous because - 
                /*
                    B has inherited fun() form A
                    C has inherited fun() from A
                    and now D is inherited fun() form both B and C so compiler don't know which fun to run.

                    so, to resolve this we use virtual clas concept.
                    we will make both class B and C as virtual classes so that copy of A members is bypassed and only one copy is there.

                    now after chanding it this is running fine.
                */
}