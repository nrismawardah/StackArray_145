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

	void push() {
		cout << "\nEnter a element: ";
		string element;
		getline(cin, element);

		if (top == 4) {					// Step 1
			cout << "Number of data exceeds the limit." << endl;
			return;
		}

		top++;							// Step 2

		stack_array[top] = element;		// Step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;
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
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int top = 0; top <= top; top++) {
				cout << stack_array[top] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
			s.push();
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice." << endl;
			break;
		}
	}
}
