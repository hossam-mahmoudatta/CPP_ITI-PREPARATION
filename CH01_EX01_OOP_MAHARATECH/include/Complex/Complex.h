#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    // Member variables to store the real and imaginary parts
    float real;
    float imag;

public:
    // Constructors
    Complex();                  // No Parameter Constructor
    Complex(float r);           // 1 Parameter Constructor
    Complex(float r, float i);  // 2 Parameters Constructor
    ~Complex();                 // Destructor
    void setComplex(float r, float, i);

    // Setter and Getter Functions
    void    setReal(float);     // Set the real part
    void    setImag(float);     // Set the imaginary part
    float   getReal();          // Get the real part
    float   getImag();          // Get the imaginary part

    // Member Functions
    Complex add(Complex c);     // Add two complex numbers
    Complex sub(Complex c);    // Subtract two complex numbers
    void    print();            // Print the complex number

    // Function to add two Complex numbers
    // Complex add(const Complex& other) const;

    // Function to display the complex number
    // void display() const;
};

#endif // COMPLEX_H
