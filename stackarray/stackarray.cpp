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
		if (top == 4) {		// Step 1
			cout << "Number of data exceeds the limit." << endl;
		}
	}
};