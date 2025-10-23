#include "LambdaExp.h"

void learnLambdaExp() {

	// Set my vectors
	vector<int> v1, v2;

	// Capture v1 and v2 by reference
	auto byRef = [&](int m) {
		v1.push_back(m);
		v2.push_back(m);
		};

	// Capture v1 and v2 by value
	auto byVal = [=](int m) mutable {
		v1.push_back(m);
		v2.push_back(m);
		};

	// Capture v1 by value and v2 by reference
	auto mixed = [v1, &v2](int m) mutable {
		v1.push_back(m);
		v2.push_back(m);
		};

	// Push 1 to both vectors by ref
	byRef(1);

	// Push 2 to both by value
	byVal(2);

	// Push 3 to v1 by value and to v2 by reference
	mixed(3);

	// Print the vectors
	cout << "==== Printing v1 =====" << endl;
	print(v1);
	
	cout << "==== Printing v2 =====" << endl;
	print(v2);

}

void print(vector<int> v) {

	for (auto c : v) cout << c << " ";

}