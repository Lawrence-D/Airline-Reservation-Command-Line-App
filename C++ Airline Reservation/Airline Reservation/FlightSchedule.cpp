#include "FlightSchedule.h"
#include<iostream>
#include <iomanip>
using namespace std;


FlightSchedule::FlightSchedule()
{

}


FlightSchedule::FlightSchedule(string _startCity, string _destinationCity, string _dapartTime, 
	string _arrivalTime, int _flightNum, string _aircraftType, int _flyerPoints, int _numSeats) 
{
	setStartCity(_startCity);
	setDestinationCity(_destinationCity);
	setDepartTime(_dapartTime);
	setArrivalTime(_arrivalTime);
	setFlightNum(_flightNum);
	setAircraftType(_aircraftType);
	setFlyerPoints(_flyerPoints);
	setNumSeats(_numSeats);
}


void FlightSchedule::setStartCity(string _startCity) 
{
	startCity = _startCity;

}


void FlightSchedule::setDestinationCity(string _destinationCity) 
{
	destinationCity = _destinationCity;
}


void FlightSchedule::setDepartTime(string _departTime) 
{
	departTime = _departTime;
}


void FlightSchedule::setArrivalTime(string _arrivalTime) 
{
	arrivalTime = _arrivalTime;
}


void FlightSchedule::setFlightNum(int _flightNum) 
{
	flightNum = _flightNum;
}


void FlightSchedule::setAircraftType(string _aircraftType) 
{
	aircraftType = _aircraftType;
}


void FlightSchedule::setFlyerPoints(int _flyerPoints) 
{
	flyerPoints = _flyerPoints;
}


void FlightSchedule::setNumSeats(int _numSeats) 
{
	numSeats = _numSeats;

}

/************************Getters***************************/
string FlightSchedule::getStartCity() 
{
	return startCity;
}


string FlightSchedule::getDestinationCity() 
{
	return destinationCity;
}


string FlightSchedule::getDepartTime() 
{
	return departTime;
}


string FlightSchedule::getArrivalTime() 
{
	return arrivalTime;
}


int FlightSchedule::getFlightNum() 
{
	return flightNum;
}


string FlightSchedule::getAircraftType() 
{
	return aircraftType;
}


int FlightSchedule::getFlyerPoints() 
{
	return flyerPoints;
}

int FlightSchedule::getNumSeats() 
{
	return numSeats;
}


void FlightSchedule::displayFlightSchedule() 
{
	//Needs formating.
	cout << setw(4) << startCity << setw(19) << destinationCity << setw(27) << departTime << setw(27) 
		<< arrivalTime << setw(27) << aircraftType << setw(27) << flightNum << setw(19) << flyerPoints;
}


/*****************Plane Seat Functions********************************/


//May need separate plane from the this class for easier access
void FlightSchedule::addSeat(string passenger)
{
	plane.pushBack(passenger);
}


//Determines empty seats
bool FlightSchedule::emptySeats() 
{
	return plane.emptySeats();
}


void FlightSchedule::displayPlaneA() 
{
	plane.planeASeatAssignments();
}


void FlightSchedule::displayPlaneB()
{
	plane.planeBSeatAssignments();
}

void FlightSchedule::seatListByName() 
{
	plane.seatListByName();
}


void FlightSchedule::seatListBySeat()
{
	plane.seatListBySeat();
}

bool FlightSchedule::seatAvailable(int seatNum) 
{
	return plane.seatAvailable(seatNum);
}

void FlightSchedule::addPassenger(int seatNum, string day, string name) 
{
	bool success = false;
	success = plane.addPassenger(seatNum, name);

	if (success) 
	{
		displayBoardingPass(seatNum, day, name);
	}
}


void FlightSchedule::removePassenger(int seatPosition, string passenger)
{
	plane.removePassenger(seatPosition, passenger);
}


string FlightSchedule::getPassenger(int seatNum) 
{
	return plane.getPassenger(seatNum);
}


bool FlightSchedule::findPassenger(string _passenger) 
{
	return plane.findPassenger(_passenger);
}


void FlightSchedule::displayBoardingPass(int seatNum, string day, string name)
{
	system("CLS");
	cout << "Congratulations and welcome " << name << " to Discount Airlines!\n" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|" << endl;
	cout << "| BOARDING PASS" <<  endl;
	cout << "| NAME: " << name << endl;
	cout << "| DAY: " << day << " FLIGHT NUMBER: " << flightNum << endl;
	cout << "| FROM: " << startCity << " TO: " << destinationCity << endl;
	cout << "| DEPATURE TIME: " << departTime << " ARRIVAL TIME: " << arrivalTime << endl;
	cout << "| SEAT NUMBER: " << seatNum +1 << endl;
	cout << "|" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;
	cout << "Press enter to give boarding pass..." << endl;
	cin.ignore();
	cin.get();
	
}