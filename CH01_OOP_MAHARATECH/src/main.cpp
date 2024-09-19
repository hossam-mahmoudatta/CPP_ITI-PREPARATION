#include "../include/Complex/Complex.h"
#include <iostream>

using namespace std;

int main() {
  Complex c1, c2, c3;

  c1.setReal(6);
  c1.setImag(3);

  c2.setReal(3);
  c2.setImag(4);

  c1.print();
  c2.print();

  cout << endl << "Number of Counter objects: " << Complex::getCounter() << endl;

  c3 = c1.add(c2); // This will create a temp object, so a constructor is called
  c3.print();

  cout << endl << "Number of Counter objects: " << Complex::getCounter() << endl;

  c3 = c1.sub(c2); // This will create a temp object, so a constructor is called
  c3.print();

  cout << endl << "Number of Counter objects: " << Complex::getCounter() << endl;

  return 0;
}

/*
  Run this Script to compile your application:

  $ g++ -I include -o outputFile src/main.cpp src/Complex/Complex.cpp

  Run this Script to run your application:
  $ outputFile.exe

*/