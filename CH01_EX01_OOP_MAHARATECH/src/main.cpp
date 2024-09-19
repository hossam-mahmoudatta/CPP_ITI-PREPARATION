#include "../include/Complex/Complex.h"
#include <iostream>

using namespace std;

int main() {
  Complex c1;
  c1.setReal(6);
  c1.setImag(-3);

  c1.print();

  return 0;
}

/*
  Run this Script to compile your application:

  $ g++ -I include -o outputFile src/main.cpp src/Complex/Complex.cpp

  Run this Script to run your application:
  $ outputFile.exe

*/