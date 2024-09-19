#include "../../include/Complex/Complex.h"
#include <iostream>
#include <cmath> // Include cmath for abs

using namespace std;

// Initialize the static member (outside the class definition)
int Complex::counter = 0;

// Constructors

// No Parameter Constructor
Complex::Complex() {
    counter++;
    cout << endl << "Default constructor called!" << endl;
}

// 1 Parameter Constructor
Complex::Complex(float r) {
    counter++;
    cout << endl << "One Parameter constructor called!" << endl;
}

// 2 Parameter Constructor
Complex::Complex(float r, float i) {
    counter++;
    cout << endl << "Two Parameter constructor called!" << endl;
}

// Destructor
Complex::~Complex() {
    counter--;
    cout << endl << "Destructor called!" << endl;
}

// Reads the value of the static counter
int Complex::getCounter() {
    return counter;
}

// set the Complex Object
void Complex::setComplex(float r, float i) {
    real = r;
    imag = i;
}

// Set the real part of the complex number
void Complex::setReal(float r) {
    real = r;
}

// Set the Imag part of the complex number
void Complex::setImag(float i) {
    imag = i;
}

// Get the Real part of the complex number
float Complex::getReal() {
    return real;
}

// Get the Imag part of the complex number
float Complex::getImag() {
    return imag;
}

// A member to perform addition behaviour
Complex Complex::add(Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    
    return temp;
}

// A member to perform addition behaviour
Complex Complex::sub(Complex c) {
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    
    return temp;
}

// Print the complex number
void Complex::print() {
    if (imag < 0) {
        cout << endl << "Your Complex Number is: " << real << " - " << abs(imag) << "i" << endl;
    }
    else {
        cout << endl << "Your Complex Number is: " << real << " + " << imag << "i" << endl;
    }
}