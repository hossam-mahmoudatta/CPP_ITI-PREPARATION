#ifndef CARS_CLASS_INTERFACE_H
#define CARS_CLASS_INTERFACE_H

#include "../UTILS/STD_LIBS.h"

class Car {
  private:
    int model;
    string brand;
    string color;

  public:
    Car();
    ~Car();

};

#endif // CARS_CLASS_INTERFACE_H