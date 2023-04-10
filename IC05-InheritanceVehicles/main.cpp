//*********************************************************************
// File name:	 main.cpp
// Author:		 Computer Science, Pacific University
// Date:		   4/10/2023
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Driver for Inheritance project
//*********************************************************************

#include <iostream>
#include <vector>

#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"
#include "SUV.h"
#include "PassengerVehicle.h"

//*********************************************************************
// Function:	  main
//
// Description:	Driver for the inheritance project
//
// Parameters:	None
//
// Returned:		EXIT_SUCCESS
//*********************************************************************

int main() {
	vector <Truck> cTrucks;

	// Test of Truck class
	Truck cMyTruck("Toyota", 1994, 220000, 5000, Truck::Doors::FIVE);
	Truck cYourTruck("Ford", 2016, 80000, 20000, Truck::Doors::TWO);

	cTrucks.push_back(cMyTruck);
	cTrucks.push_back(cYourTruck);

	for (Truck cTruck : cTrucks) {
		cout << cTruck << endl;
	}

	// Test of Passenger Vehicle Class
	PassengerVehicle myPassengerVehicle("Honda", 2005, 201000, 6000, 
																			3500, 1500); 
	cout << myPassengerVehicle << endl;

	return EXIT_SUCCESS;
}