#include "../include/Stack/Stack.h"
#include <iostream>

using namespace std;

int main() {
  Stack s1;

  s1.push(2);
  s1.push(5);
  s1.push(254);
  s1.push(223);
  s1.pop();
  s1.push(150);
  s1.push(320);

  return 0;
}

/*
  Run this Script to compile your application:

  $ g++ -I include -o outputFile src/main.cpp src/Stack/Stack.cpp

  Run this Script to run your application:
  $ outputFile.exe

*/