#include <iostream>

using namespace std;

// This is an abstract class 
class Vehicule {
public:

	// For a class to be abstract, It needs to have at least one abstract ( virtual ) method
	// The = 0, makes It purely virtual, and that IT NEEDS to be implemented in a sub-class
	virtual void accelerate() = 0;

	// This is not a pure virtual method, as It just CAN be override by a sub-class
	virtual void brake() { cout << "Braaaaaake" << endl; }

	// This one is a normal function
	void startEngine() {
		cout << "Dodododododod" << endl;
	}
};

class Car : public Vehicule {

public:
	// Here, I must implement the accelerate function or It won't compile
	void accelerate() { cout << "Vroooooooom"; }
};