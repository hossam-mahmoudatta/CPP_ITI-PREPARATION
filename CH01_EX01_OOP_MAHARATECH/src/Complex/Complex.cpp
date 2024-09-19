#include "../../include/Complex/Complex.h"
#include <iostream>
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

// Print the complex number
void Complex::print() {
    cout << endl << "Your Complex Number is: " << real << " + " << imag << "i" << endl;
}