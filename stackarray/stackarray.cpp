#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	// Constructor
	StackArray() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {					// Step 1
			cout << "Number of data exceeds the limit." << endl;
			return "";
		}

		top++;							// Step 2
		stack_array[top] = element;		// Step 3
		cout << endl;
		cout << element << " ditambahkan(pushed" << endl;

		return element;
	}

	void pop() {
		if (empty()) {					// Step 1
			cout << "\nStack is empty. Cannot pop." << endl;
			return;						// 1.b
		}

		cout << "\mThe popped element is: " << stack_array[top] << endl;		// Step 2
		top--;							// Step 3 decrement
	}

	// Method for check if data is empty
	bool empty() {
		return (top == -1)
	}
};