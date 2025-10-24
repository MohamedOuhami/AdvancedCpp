#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

// ==========================================
//				Templates
// ==========================================

// A template function to return maximum of 2 valuse
// This basically says that this is a template function, with a typename named T
// THe return type is T, and IT takes 2 Ts as input
// Return the biggest of them
template <typename T> T myMax(T a, T b) {
	return (a > b) ? a : b;
}

// A class template
template <typename T> class Geek {

public:
	T x;
	T y;

	// Constructor
	Geek(T val1, T val2) : x(val1), y(val2) {}

	// Method to get values
	void getValues() {
		cout << x << " " << y << endl;
	}
};

// A variable template
template <typename T> constexpr T pi = T(3.14159);

// Non-type arguments template
template <typename T, int max> int arrMin(T arr[], int n) {

	int min = max;

	for (int i = 0; i < n; i++) {
		if (arr[i] < min) min = arr[i];
	}

	return min;
}

void testTemplateMax();
void testClassTemp();
void testVariableTemp();
void testNonTypeArguments();

void LearnIterators();
void LearnVectors();
void LearnSets();
void LearnMaps();
void LearnQueues();
void LearnStacks();