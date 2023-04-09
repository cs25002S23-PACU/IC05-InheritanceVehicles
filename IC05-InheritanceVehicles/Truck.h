//*********************************************************************
// File name:	 Truck.h
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//*********************************************************************

#pragma once

#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

class Truck : public Vehicle {
public:
  enum Doors { TWO = 2, FOUR = 4, FIVE = 5 };

  Truck(string make, int modelYear, double mileage, double price,
    Doors NumberOfDoors);

  friend ostream& operator<< (ostream& rcStream,
    Truck& rcTruck);

  void print(ostream& rcOut) const;

private:
  Doors mNumberOfDoors;
};