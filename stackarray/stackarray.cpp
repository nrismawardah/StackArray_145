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

	}
};