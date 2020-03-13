#include "SortFlightSchedules.h"






//Bubble sorts by starting city Name
void SortFlightSchedules::sortFlightByFrom(vector<FlightSchedule> &tempFlights)
{
	bool swap;
	FlightSchedule temp;

	do
	{
		swap = false;
		for (unsigned int i = 0; i < (tempFlights.size() - 1); i++)
		{
			if (tempFlights[i].getStartCity() > tempFlights[i + 1].getStartCity())
			{
				temp = tempFlights[i];
				tempFlights[i] = tempFlights[i + 1];
				tempFlights[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}


//Bubble sorts by Destination City Name
void SortFlightSchedules::sortFlightByTo(vector<FlightSchedule> &tempFlights)
{
	bool swap;
	FlightSchedule temp;

	do
	{
		swap = false;
		for (unsigned int i = 0; i < (tempFlights.size() - 1); i++)
		{
			if (tempFlights[i].getDestinationCity() > tempFlights[i + 1].getDestinationCity())
			{
				temp = tempFlights[i];
				tempFlights[i] = tempFlights[i + 1];
				tempFlights[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);

}

//Sort by departure time
void SortFlightSchedules::sortFlightByDeparture(vector<FlightSchedule> &tempFlights)
{
	bool swap;
	FlightSchedule temp;

	do
	{
		swap = false;
		for (unsigned int i = 0; i < (tempFlights.size() - 1); i++)
		{
			if (tempFlights[i].getDepartTime() > tempFlights[i + 1].getDepartTime())
			{
				temp = tempFlights[i];
				tempFlights[i] = tempFlights[i + 1];
				tempFlights[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);

}


//Sort by arrival time
void SortFlightSchedules::sortFlightByArrival(vector<FlightSchedule> &tempFlights)
{
	bool swap;
	FlightSchedule temp;

	do
	{
		swap = false;
		for (unsigned int i = 0; i < (tempFlights.size() - 1); i++)
		{
			if (tempFlights[i].getArrivalTime() > tempFlights[i + 1].getArrivalTime())
			{
				temp = tempFlights[i];
				tempFlights[i] = tempFlights[i + 1];
				tempFlights[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}


//Bubble sorts by flight number
void SortFlightSchedules::sortFlightByCode(vector<FlightSchedule> &tempFlights)
{
	bool swap;
	FlightSchedule temp;

	do
	{
		swap = false;
		for (unsigned int i = 0; i < (tempFlights.size() - 1); i++)
		{
			if (tempFlights[i].getFlightNum() > tempFlights[i + 1].getFlightNum())
			{
				temp = tempFlights[i];
				tempFlights[i] = tempFlights[i + 1];
				tempFlights[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}



//Sorts by flyer points
void SortFlightSchedules::sortFlightByPoints(vector<FlightSchedule> &tempFlights)
{
	bool swap;
	FlightSchedule temp;

	do
	{
		swap = false;
		for (unsigned int i = 0; i < (tempFlights.size() - 1); i++)
		{
			if (tempFlights[i].getFlyerPoints() > tempFlights[i + 1].getFlyerPoints())
			{
				temp = tempFlights[i];
				tempFlights[i] = tempFlights[i + 1];
				tempFlights[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

