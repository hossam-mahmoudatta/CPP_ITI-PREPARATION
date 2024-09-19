#ifndef STACK_H
#define STACK_H

class Stack {
private:
    // Creation of the Stack Attributes
    int tos;    //  Top of Stack
    int size;   // Length of the stack
    int *stackArray;    //  Stack Array

    static int counter; //  Static variable to keep track of the number of objects created

public:
    // Constructors
    Stack(int n = 10);  // One Parameter Constructor
    ~Stack();           // Destructor

    // Reads the value of the static counter
    static int getCounter();

    // Member Functions
    void push(int); // Pushes an element onto the stack
    int  pop();     // Pops an element from the stack
    void print();   // Print the complex number
};

#endif // STACK_H
