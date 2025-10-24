#include <LearnSTL.h>

void testTemplateMax() {

	// Use the template function with 2 int
	cout << "Max of 3 and 5 is " << myMax<int>(3, 5) << endl;

	// Use the template functoin with 2 floats
	cout << "Max of 1.5 and 7.4 is " << myMax<float>(1.5, 7.4) << endl;

	// Use the template function with 2 chars
	cout << "Max of 'g' and 'a' is " << myMax<char>('g', 'a') << endl;
}

void testClassTemp() {

	// Create an int Geek
	Geek<int> intGeek(10, 20);

	// Create a float Geek
	Geek<float> floatGeek(10.4, 4.6);

	// Call the intGeek getValues
	intGeek.getValues();

	// Call the floatGeek getValues
	floatGeek.getValues();


}

void testVariableTemp() {

	// This is pi as a float
	cout << "This is pi as a float : " << pi<float> << endl;
	cout << "This is pi as a double : " << pi<double> << endl;
	cout << "This is pi as a int : " << pi<int> << endl;
}

void testNonTypeArguments() {

	int arr1[] = { 10, 20, 15, 12 };
	// DIvide the full size of the array by the size of one element to get how many elements
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	char arr2[] = { 1, 2, 3 };
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	cout << arrMin<int, 10000>(arr1, n1) << endl;
	cout << arrMin<char, 256>(arr2, n2);
}

void LearnIterators() {

	// Creating a vector
	vector<int> v = { 10,20,30 };

	cout << "Traversing the vector" << endl;
	// Use iterator to traverse the vector
	for (auto it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "Traversing the vector backwards" << endl;

	for (auto it = v.rbegin(); it != v.rend() ; it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void LearnVectors() {

	// Creating a vector

	vector<int> v = { 1,2,3,4 };

	// Printing v values
	for (auto val : v) cout << val << " " << endl;

	cout << "The size of the vector : " << v.size() << endl;
	// Inserting new element at the end of the vector
	v.push_back(5);


	for (auto val : v) cout << val << " " << endl;
	cout << "The size of the vector : " << v.size() << endl;

	// Insert at a certain index ( index 2 per example )
	v.insert(v.begin() + 2, 6);

	for (auto val : v) cout << val << " " << endl;
	cout << "The size of the vector : " << v.size() << endl;


	// Getting elements by index
	cout << "Element at index 3 " << v.at(3) << endl;

	// Delete the last element
	v.pop_back();

	// Delete a specific element
	v.erase(find(v.begin(), v.end(), 4));

	// Check if a vector is empty
	if (v.empty()) {
		cout << "The vector is empty" << endl;
	}
}

void LearnSets() {

	// Creating an empty set
	set<int> s;

	// Initialize a set
	set<int> s1 = { 1,2,3,4,4 };

	for (auto x : s1) cout << x << " ";
	cout << endl;

	// Inserting a new element
	s1.insert(5);

	for (auto x : s1) cout << x << " ";
	cout << endl;

	// Access elements using find
	auto it = s1.find(3);

	if (it != s1.end()) {
		cout << "Found the element " << *it << endl;
	}

	// CHecking if an element exists

	if (s1.count(5)) {
		cout << "The element 5 exists" << endl;
	}

	// Deleting by value
	s1.erase(4);

	// DElete by iterator
	// DElete the first element
	s1.erase(s1.begin());

}

void LearnMaps() {
	// Create an empty map
	map<int, string> myMap;

	// Initialize a map
	map<int, string> players = { 
		{1,"Lahrar"},
		{34,"Bougrine"},
		{9,"Khafi"},
		{11,"Ould-chikh"}
	};

	// Insert a new element
	players.insert({ 33,"Mchakhchakh" });

	// Get the values in a map
	for (auto& p : players) {
		cout << p.first << " - " << p.second << endl;
	}

	// Access element by key
	cout << "Player with number 34 : " << players.at(34) << endl;

	// Find elements with iterators
	auto it = players.find(33);

	if (it != players.end()) {
		cout << "Found the player with number 33 - " << it->second << endl;
	}

	// Delete by key
	players.erase(11);

	// Delete by iterator
	players.erase(players.begin());
}

void LearnQueues() {

	queue<int> q;

	q.push(1);
	q.push(6);

	cout << "Front element : " << q.front() << endl;
	cout << "Back element : " << q.back() << endl;

	// Remove the element from the front
	q.pop();

	q.push(10);
	q.push(93);

	// Check if a queue is empty
	(q.empty()) ? (cout << "Queue is empty" << endl) : (cout << "Queue is not empty" << endl);

	// Get the size of the queue
	cout << "The current size of the queue is : " << q.size() << endl;
}

void LearnStacks() {

	// Create an empty stack
	stack<int> st;

	// Insert new elements
	st.push(1);
	st.push(4);
	st.push(10);

	// Accessing the top element
	cout << "The top element : " << st.top() << endl;

	// Delete an element
	st.pop();
	cout << "The new top element : " << st.top() << endl;

	// Check If a stack is empty
	st.empty() ? (cout << "The stack is empty" << endl) : (cout << "The stack is not empty" << endl);

	// Get the size of the stack
	cout << "The size of the stack : " << st.size() << endl;

}