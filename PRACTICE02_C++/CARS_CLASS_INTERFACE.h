#ifndef CARS_CLASS_INTERFACE_H
#define CARS_CLASS_INTERFACE_H

#include "STD_LIBS.h"

class Car {
  private:
    string brand;
    string model;
    string color;
    int year;

  public:
    void setBrand(string name);
    string getBrand();
    void setModel(string name);
    string getModel();
    void setColor(string name);
    string getColor();
    void setYear(int number);
    int getYear();

    Car();
    ~Car();
};

#endif // CARS_CLASS_INTERFACE_H