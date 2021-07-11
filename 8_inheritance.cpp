// is a relationship is always implemented as a public inheritance

class A {
	int a,b;
public:
	void fun();
};

class B : public A {
	void foo();
};

int main(){}