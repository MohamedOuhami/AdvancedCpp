#include <LearnOOP.h>

void testCreatingObject() {

	Parent parent;
	Child child;

	// Create a polymorphic object who is compiled as Parent, but in runtime is child
	Parent* polymorphicObj = new Child();

	// Method overloading ( compile-time )
	parent.foo();
	parent.foo(10);

	// Method overriding
	child.foo(10);
	//child.foo();

	// Polymorphism
	polymorphicObj->foo(10);

	delete polymorphicObj;
	
}