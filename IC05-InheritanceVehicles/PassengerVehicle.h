//*********************************************************************
// File name:	 PassengerVehicle.h
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

class PassengerVehicle : public Vehicle {
public:

  PassengerVehicle(string make, int modelYear, double mileage,
    double price, double weight, double towingCapacity);

  double getWeight () const; 

  double getTowingCapacity () const; 

  void print(ostream& rcOut) const;

  friend ostream& operator<< (ostream& rcStream,
    PassengerVehicle& rcPassengerVehicle);

private:
  double mWeight; 
  double mTowingCapacity; 
};