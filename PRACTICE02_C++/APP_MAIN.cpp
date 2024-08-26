#include "CARS_CLASS_INTERFACE.h"

int main() {
  Car car01;
  
  car01.setBrand("Toyota");
  car01.setModel("Corolla");
  car01.setYear(2020);
  car01.setColor("Blue");

  cout << "This Car's Brand is: "         << car01.getBrand() << endl;
  cout << "And its Model is: "            << car01.getModel() << endl;
  cout << "And its Color is: "            << car01.getColor() << endl;
  cout << "And its Manufacture Year is: " << car01.getYear()  << endl;
}