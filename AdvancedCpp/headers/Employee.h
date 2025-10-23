#include <iostream>

using namespace std;

class Employee {

	// The private members of the class
private:
	string name;
	float salary;

	// Public members
public:

	// Constructor
	Employee(string name, float salary) {
		Employee::name = name;
		Employee::salary = salary;
	}

	// Destructor
	~Employee() = default;

	// Getters method
	string getName() { return name; }
	float getSalary() { return salary; }

	// Setters method
	void setName(string name) { name = name; }
	void setSalary(float salary) { salary = salary; }

	// Other method like to show employee information
	void displayInformation() {
		cout << "Employee name : " << name << endl;
		cout << "Employee salary : " << salary << endl;
	}
};