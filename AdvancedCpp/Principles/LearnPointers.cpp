#include <LearnPointers.h>
#include <iostream>
#include <memory>

using namespace std;

void pointersIntro() {

	// Create a variable with value 10
	int var = 10;

	// Create a pointer and give It the address of var
	int* ptr = &var;

	cout << "Value of var : " << var << endl;
	cout << "Address of var : " << &var << endl;
	cout << "The address that ptr points to : " << ptr << endl;
	cout << "The value of the value that ptr points to :" << *ptr << endl;

}

void getPtrSizes() {

	int* ptr1 = nullptr;

	char* ptr2 = nullptr;

	cout << "Size of int pointer : " << sizeof(ptr1) << " bytes" << endl;
	cout << "Size of char pointer : " << sizeof(ptr2) << " bytes" << endl;
}

int* returnPointer() {

	int x = 10;

	return &x;
}

void specialPointers() {

	// An uninitialized pointer has random value, it is called a wild pointer
	int* ptr1;

	int* ptr2 = nullptr;

	//cout << "The wild pointer : " << ptr1 << endl;
	cout << "The zeroed pointer : " << ptr2 << endl;

	// Void pointers
	int x = 42;

	void* ptr = &x;

	cout << "Value pointed to by void ptr : " << *static_cast<int*>(ptr) << endl;

	cout << "==== Dangling Pointers =====" << endl;

	int* ptr3 = returnPointer();

	cout << "This should give an undefined behavior" << endl;
	cout << *ptr3 << endl;
}

void PointerArithmetic() {

	int n = 4;

	int* ptr = &n;

	cout << "Size of the variable n :" << sizeof(n) << " bytes" << endl;

	cout << "Address stored in the pointer : " << ptr << endl;

	// Incrementing the ptr
	ptr++;

	cout << "Address stored in the pointer after increment : " << ptr << endl;
	cout << "Its value (Should be garbage) : " << *ptr << endl;

	// Decrementing the ptr
	ptr--;

	cout << "Address stored in the pointer after decrement: " << ptr << endl;
}

void DoublePointer() {

	int x = 19;

	// Pointer that holds the address of x
	int* ptr1 = &x;

	// Second pointer that holds the address of ptr1
	int** ptr2 = &ptr1;
	cout << "Value of x : " << x << endl;
	cout << "Address that ptr1 points to : : " << ptr1 << endl;
	cout << "Address that ptr2 points to : : " << ptr2 << endl;

}

void FunctionPointers() {

	// Create a function pointer
	int (*func)(int, int);

	// Func now points to the multiply function
	func = TestFunc;

	int prod = func(1, 2);

	cout << "The value of the product is " << prod << endl;

	cout << "Passing the function as function pointer" << endl;
	FunctionPointersPassPointer(TestFunc);
}

void FunctionPointersPassPointer(int (*funcptr)(int,int)) {

	cout << "We can know calculate the prod inside this function, without using the value " << funcptr(1, 2) << endl;
}

int TestFunc(int a, int b) {
	return a * b;
}

void LearnSmartPointers() {
	
	// When you create a new object in the heap, you need to delete them after finishing from using them
	// Not with unique_ptr, the moment the pointer gets out of scope, it deleted from the heap

	unique_ptr<int> ptr = make_unique<int>(10);

	cout << "The unique ptr : " << ptr << endl;

	// The unique_ptr cannot be copied, but rather moved, and the first becomes empty

	auto ptr2 = move(ptr);

	cout << "The old ptr : " << ptr << endl;
	cout << "The new owner of the object : " << ptr2 << endl;

	cout << "======= Shared Pointers =======" << endl;

	shared_ptr<int> sptr1 = make_shared<int>(40);

	cout << "How many pointers point to my object : " << sptr1.use_count() << endl;

	// Share the ownership
	auto sptr2 = sptr1;
	cout << "How many pointers point to my object : " << sptr1.use_count() << endl;

}