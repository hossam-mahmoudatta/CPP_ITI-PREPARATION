#include "../../include/Complex/Complex.h"
#include <iostream>
#include <cmath> // Include cmath for abs

using namespace std;

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