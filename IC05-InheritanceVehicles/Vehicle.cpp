//*********************************************************************
// File name:	 Vehicle.cpp
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//*********************************************************************

#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

//*********************************************************************
// Constructor: Vehicle
//
// Description:	Initializes data members to passed-in values
//
// Parameters:	make - make of the vehicle
//							modelYear  - model year of the vehicle
//							mileage - mileage driving in miles	
//							price - price in dollars
//
// Returned:		none
//*********************************************************************
Vehicle::Vehicle(string make, int modelYear, double mileage,
	double price) {
	mMake = make;
	mModelYear = modelYear;
	mMileage = mileage;
	mPrice = price;
}

//*********************************************************************
// Function:	  getMake
//
// Description:	retrieve the make of the vehicle
//
// Parameters:	none
//
// Returned:		string - the make of the vehicle
//*********************************************************************
string Vehicle::getMake() const {
	return mMake;
}

//*********************************************************************
// Function:	  getModelYear
//
// Description:	retrieve the model year of the vehicle
//
// Parameters:	none
//
// Returned:		int - the model year of the vehicle
//*********************************************************************
int Vehicle::getModelYear() const {
	return mModelYear;
}

//*********************************************************************
// Function:	  getMileage
//
// Description:	Retrieve the mileage of the vehicle
//
// Parameters:	None
//
// Returned:		double - the mileage of the vehicle
//*********************************************************************
double Vehicle::getMileage() const {
	return mMileage; ;
}

//*********************************************************************
// Function:	  getMileage
//
// Description:	Retrieve the mileage of the vehicle
//
// Parameters:	None
//
// Returned:		double - the price of the vehicle
//*********************************************************************
double Vehicle::getPrice() const {
	return mPrice;
}

//*********************************************************************
// Function:	  print
//
// Description:	Output the Employee to the stream
//
// Parameters:	rcOutStream - the stream to output to
//              cVehicle - the Vehicle to output
//
// Returned:		ostream - the output stream
//*********************************************************************

void Vehicle::print(std::ostream& rcOutStream) const {
	rcOutStream << "Make: " << mMake << ", Model Year: " << mModelYear
		<< ", Mileage: " << mMileage << ", Price: " << mPrice;
}