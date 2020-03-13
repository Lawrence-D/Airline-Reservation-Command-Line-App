#pragma once
#include "FlightSchedule.h"
#include "SortFlightSchedules.h"
#include "ReservationHistory.h"
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;


class ReservationMenu 
{

	private:
		bool menuStatus; //if true booking, if false cancellation

		vector<FlightSchedule> mondayFlights;
		vector<FlightSchedule> tuesdayFlights;
		vector<FlightSchedule> wednesdayFlights;
		vector<FlightSchedule> thursdayFlights;
		vector<FlightSchedule> fridayFlights;
		vector<FlightSchedule> saturdayFlights;
		vector<FlightSchedule> sundayFlights;
		vector<FlightSchedule> tempFlights; //Changes depending on the day
		
	/*	vector<ReservationHistory> history;*/
	public:

		ReservationMenu();

		/**********File Functions************/
		void readPlaneFiles();
		void writePlaneFiles();
		
		/*void readHistory();
		void writeHistory();*/
		/********Menu Functions*************/
		void mainMenu();
		void dayBookingMenu();
		void dayCancelBookingMenu();

		void viewFlightSeatsMenu(int, int, int, int);
		void viewSeatMenu(int, int, int);
		void viewMenu(int);
		
		void displayChosenFlightViewMenu(int, int);
		void finalBookingMenu(int, int, int, int, int, int);
		void finalCancellationMenu(int, int, int, int, int, int);

		void suggestFlightsMenu(int, int, int);
		
		/*void showHistory();*/
		/*******************************************************/
		
		void viewPlaneSeatArrangement(int);
		void addFlightSchedule(int, FlightSchedule);
		string convertDay(int);
		void bookFlight(int, int, int, string);
		void cancelFlight(int, int, int, string);
		int getFlightScheduleElement(int, int);
		void flightValidation(int, int, int);
		bool availableSeatsForSuggestion(int, int);
				
		/**************Sorting Functions****************/
		void initiateSortSelection(int, int);
		void copyFlights(int); //copies flights to do sort/display.
	
		/**************Header Functions***************/
		void flightScheduleHeader();
		void getSortedFlightViewHeader(int);
		void displayMenuStatus();
		void printLongLine();
};