//*********************************************************************
// File name:	 PassengerVehicle.cpp
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//*********************************************************************
#include "PassengerVehicle.h"
#include <iostream>

//*********************************************************************
// Constructor: PassengerVehicle
//
// Description:	Initializes data members to passed-in values
//
// Parameters:	make - make of the vehicle
//							modelYear  - model year of the vehicle
//							mileage - mileage driving in miles	
//							price - price in dollars
//							weight - weight of the vehicle in lbs
//							towingCapacity - towing capacity of the vehicle in lbs
//							
// Returned:		none
//*********************************************************************
PassengerVehicle::PassengerVehicle(string make, int modelYear,
															double mileage, double price,
															double weight,
														  double towingCapacity) :
															Vehicle(make, modelYear, mileage, price),
															mWeight(weight), 
															mTowingCapacity(towingCapacity){
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

void PassengerVehicle::print(std::ostream& rcOutStream) const {
	Vehicle::print(rcOutStream);
	rcOutStream << ", Weight: " << mWeight << ", Towing Capacity : "
		<< mTowingCapacity;
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
ostream& operator<< (ostream& rcOutStream,
										 PassengerVehicle& rcPassengerVehicle) {
	rcPassengerVehicle.print(rcOutStream);
	return rcOutStream;
}