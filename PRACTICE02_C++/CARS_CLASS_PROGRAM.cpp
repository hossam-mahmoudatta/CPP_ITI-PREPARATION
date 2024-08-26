#include "CARS_CLASS_INTERFACE.h"

void Car::setBrand(string name) {
  brand = name;
}

string Car::getBrand() {
  return brand;
}

void Car::setModel(string name) {
  model = name;
}

string Car::getModel() {
  return model;
}

void Car::setColor(string name) {
  color = name;
}

string Car::getColor() {
  return color;
}

void Car::setYear(int number) {
  year = number;
}

int Car::getYear() {
  return year;
}

Car::Car() {

}

Car::~Car() {
  
}
