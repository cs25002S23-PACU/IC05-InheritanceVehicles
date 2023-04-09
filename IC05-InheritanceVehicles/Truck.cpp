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
// Description:	
//
// Parameters:	
//							
//
// Returned:		none
//*********************************************************************
Truck::Truck(string make, int modelYear, double mileage, double price,
	Doors NumberOfDoors) : Vehicle(make, modelYear, mileage, price) {
	mNumberOfDoors = NumberOfDoors;
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

ostream& operator<< (ostream& rcOutStream, Truck& rcTruck) {
	rcTruck.print(rcOutStream);
	return rcOutStream;
}