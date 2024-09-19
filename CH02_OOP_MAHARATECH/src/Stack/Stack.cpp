#include "../../include/Stack/Stack.h"
#include <iostream>
#include <cmath> // Include cmath for abs

using namespace std;

// Initialize the static member (outside the class definition)
int Stack::counter = 0;

// Constructors

// One Parameter Constructor
Stack::Stack(int n) {
    tos = 0;
    size = n;
    stackArray = new int[size];
    counter++;
    cout << endl << "Default constructor of stack object with size: " << n << endl;
}

// Destructor
Stack::~Stack() {
    delete[] stackArray;
    counter--;
    cout << endl << "Stack Object will be destroyed!" << endl;
}

// Reads the value of the static counter
int Stack::getCounter() {
    return counter;
}

// Push something into the stack
void Stack::push(int value) {
    if (tos == size - 1) {
        cout << endl << "Stack Overflow: Unable to push: " << value << endl;
    }
    else {
        stackArray[tos] = value;
        cout << endl << "Pushed onto the stack: " << value << endl;
        cout << "Stack @: " << tos << endl;
        tos++;
    }
}

// Pop something into the stack
int Stack::pop() {
    if (tos == -1) {
        cout << endl << "Stack Underflow, unable to pop from stack." << endl;
        return -1;
    }
    else {
        tos--;
        int value = stackArray[tos];
        cout << endl << value << " is popped from the stack." << endl;
        cout << "Stack @: " << tos << endl;
        
        return value;
    }
}
