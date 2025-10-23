#include <iostream>
using namespace std;

class Parent {
public:

	// Overloaded method
	void foo() {
		cout << "Parent.foo()" << endl;
	}
	
	// Overloaded method
	virtual void foo(int a) {
		cout << "Parent.foo(int): " << a << endl;
	}
};

class Child : public Parent {
public:

	// Override Parent.foo(int)
	void foo(int a) {
		cout << "Child.foo(int):" << a << endl;
	}
};