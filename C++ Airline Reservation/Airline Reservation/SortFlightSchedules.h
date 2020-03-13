#pragma once

#include "FlightSchedule.h"
#include <vector>
using namespace std;



class SortFlightSchedules 
{

	private:


	public:
		//It would be really difficult to include this function at this point. 
		/*void initiateSortSelection(int, int);*/  
		static void sortFlightByFrom(vector<FlightSchedule> &);
		static void sortFlightByTo(vector<FlightSchedule> &);
		static void sortFlightByDeparture(vector<FlightSchedule> &);
		static void sortFlightByArrival(vector<FlightSchedule> &);
		static void sortFlightByPoints(vector<FlightSchedule> &);
		static void sortFlightByCode(vector<FlightSchedule> &);
};