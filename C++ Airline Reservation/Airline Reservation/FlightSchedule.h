#pragma once

#include "Plane.h"
#include<string>

using namespace std;



class FlightSchedule 
{


	private:
		string startCity;
		string destinationCity;
		string departTime;
		string arrivalTime;
		int flightNum;
		string aircraftType; //determines plane type for the file
		int flyerPoints;
		int numSeats; //Determines really which plane we are using.
		
		Plane plane; //May or may not use in this class
	public:
		FlightSchedule();
		FlightSchedule(string, string, string, string, int, string, int, int);

		void setStartCity(string);
		void setDestinationCity(string);
		void setDepartTime(string);
		void setArrivalTime(string);
		void setFlightNum(int);
		void setAircraftType(string);
		void setFlyerPoints(int);
		void setNumSeats(int);

		string getStartCity();
		string getDestinationCity();
		string getDepartTime();
		string getArrivalTime();
		int getFlightNum();
		string getAircraftType();
		int getFlyerPoints();
		int getNumSeats();
		void displayBoardingPass(int, string, string );

		/********Functions to Access Plane*********/
		void displayFlightSchedule();
		void addSeat(string);
		bool emptySeats();
		void displayPlaneA();
		void displayPlaneB();
		void seatListByName();
		void seatListBySeat();
		bool seatAvailable(int);
		void addPassenger(int, string, string);
		void removePassenger(int, string);
		string getPassenger(int);
		bool findPassenger(string);
};