//*********************************************************************
// File name:	 Truck.cpp
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//*********************************************************************
#include "Truck.h"
#include <iostream>

//*********************************************************************
// Constructor: Truck
//
// Description:	Initializes data members to passed-in values
//
// Parameters:	make - make of the vehicle
//							modelYear  - model year of the vehicle
//							mileage - mileage driving in miles	
//							price - price in dollars
//							numberofDoors - number of doors
//							
// Returned:		none
//*********************************************************************
Truck::Truck(string make, int modelYear, double mileage, double price,
	Doors numberOfDoors) : Vehicle(make, modelYear, mileage, price) {
	mNumberOfDoors = numberOfDoors;
}

//*********************************************************************
// Function:	  print
//
// Description:	Output the Truck to the stream
//
// Parameters:	rcOutput - the stream to output to
//              cTruck - the Truck to output
//
// Returned:		ostream - the output stream
//*********************************************************************

void Truck::print(std::ostream& rcOutStream) const {
	Vehicle::print(rcOutStream);
	rcOutStream << ", Number of Doors: " << mNumberOfDoors;
}

//*********************************************************************
// Function:	  operator<<
//
// Description:	Output the Truck to the stream 
//
// Parameters:	rcOutStream - the stream to output to
//              rcTruck - the Truck to output
//
// Returned:		ostream - the output stream
//*********************************************************************
ostream& operator<< (ostream& rcOutStream, Truck& rcTruck) {
	rcTruck.print(rcOutStream);
	return rcOutStream;
}