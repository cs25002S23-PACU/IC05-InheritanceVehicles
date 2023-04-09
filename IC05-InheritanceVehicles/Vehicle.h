//*********************************************************************
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//*********************************************************************

#pragma once

#include <iostream>
#include <string> 

using namespace std;

class Vehicle {
public:
  Vehicle(string make, int modelYear, double mileage, double price);

  std::string getMake() const;
  int getModelYear() const;
  double getMileage() const;
  double getPrice() const;

  void print(ostream& rcOutStream) const;

private:
  string mMake;
  int mModelYear;
  double mMileage;
  double mPrice;
};