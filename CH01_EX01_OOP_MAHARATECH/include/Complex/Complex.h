#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    // Member variables to store the real and imaginary parts
    float real;
    float imag;

public:
    // Constructor
    // Complex(double real, double imag);

    void setReal(float);  // Set the real part

    void setImag(float);  // Set the imaginary part

    float getReal();      // Get the real part

    float getImag();      // Get the imaginary part

    void print();         // Print the complex number

    // Function to add two Complex numbers
    // Complex add(const Complex& other) const;

    // Function to display the complex number
    // void display() const;
};

#endif // COMPLEX_H
