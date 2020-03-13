#include "Plane.h"
#include <iostream>
#include <iomanip>
using namespace std;


Plane::Plane() 
{

}


void Plane::pushBack(string _passenger)
{
	seats.push_back(_passenger);
}


//Returns a bool value signaling that the seat has been changed
bool Plane::addPassenger(int seatPosition, string passenger)
{
	int i = seatPosition;

	bool emptySeat = seatAvailable(seatPosition);

	if (emptySeat)
	{
		seats[i] = passenger;
	}
	return emptySeat;
}


//Removes a passenger from the plane
void Plane::removePassenger(int seatPosition, string passenger)
{

	int i = seatPosition;


	bool emptySeat = seatAvailable(seatPosition);

	if (!emptySeat)
	{
		if (seats[i] == passenger)
		{
			seats[i] = "E";
			cout << "\nPassenger " << passenger << " has been removed." << endl;
			cout << "Press enter to continue..." << endl;
			cin.ignore();
			cin.get();
		}
		else
		{
			cout << "\nPassenger " << passenger << " could not be removed." << endl;
			cout << "Press enter to continue..." << endl;
			cin.ignore();
			cin.get();
		}
	}
}


string Plane::getPassenger(int seatNum) 
{
	int p = seatNum;

	return seats[p];
}



//Determines if seat is filled
bool Plane::seatAvailable(int seatPosition)
{
	int i = seatPosition;

	if (i > seats.size() || 1 < 0)
		return false;

	if (seats[i] == "E")
	{
		return true;
	}
	else
		return false; 
}


//I hate this function lol
void Plane::getAvailableSeats() 
{
	for (unsigned int i = 0; i < seats.size(); i++) 
	{
		bool emptySeat = seatAvailable(i);

		if (emptySeat)
		{	
			cout << setw(11) << i + 1 << setw(25) << "AVAILABLE" << endl;
		}
	}
}


//Leave this function alone
bool Plane::emptySeats() 
{
	bool emptySeat = false;

	for (unsigned int i = 0; i < seats.size(); i++) 
	{
		if (seats[i] == "E") 
		{
			emptySeat = true;
		}
	}
	return emptySeat;
}



void Plane::seatListByName() 
{
	int assignedSeat = 0;  
	vector<string> tempSeats = sortByName();

	cout << "--------------------------------------------------------------------" << endl;
	cout << setw(47) << "****SEATS LIST BY NAME****" << endl;
	
	listHeader();

	for (int i = 0; i < tempSeats.size(); i++)
	{
		if (tempSeats[i] != "E") 
		{
			assignedSeat = getUnavailableSeats(tempSeats[i]);
			cout << setw(11) << assignedSeat + 1 << setw(25) << "UNAVAILABLE" << setw(25) << tempSeats[i] << endl;
		}
	}
	getAvailableSeats();
}


void Plane::seatListBySeat()
{
	cout << "--------------------------------------------------------------------" << endl;
	cout << setw(50) << "****SEATS LIST BY SEAT NUMBER****" << endl;
	listHeader();

	for (int i = 0; i < seats.size(); i++)
	{
		if (seats[i] == "E") 
		{
			cout << setw(11) << i + 1 << setw(25) << "AVAILABLE" << endl;
		}
		else
			cout << setw(11) << i + 1 << setw(25) << "UNAVAILABLE" << setw(25) << seats[i] << endl;
	}
}


//Returns the element of the vector
int Plane::getUnavailableSeats(string passenger)
{
	int i = 0;

	for (; i < seats.size(); i++)
	{
		if (passenger == seats[i])
		{
			break;
		}
	}
	return i;

}


void Plane::listHeader()
{
	cout << "--------------------------------------------------------------------" << endl;
	cout << setw(12) << "SEAT NUMBER" << setw(24) << " AVAILABILTY" << setw(25) << " PASSENGER" << endl;
	cout << "--------------------------------------------------------------------" << endl;
}


void Plane::planeASeatAssignments() 
{
	int temp = 0;
	bool newLine = true;

	cout << setw(21) << "(PLANE ARRANGEMENT)" << endl;

	for (int i = 0; i < seats.size(); i++)
	{
		temp = i + 1;

		if (newLine) 
		{
			/*cout << setw(27);*/
			newLine = false;
		}

		if (seats[i] != "E")
		{

			if (temp == 2 || temp == 6 || temp == 10 || temp == 14 || temp == 18)
			{
				cout << "| F | X |";
			}
			else
			{
				cout << "| F |";
			}
		}
		else
		{

			if (temp == 2 || temp == 6 || temp == 10 || temp == 14 || temp == 18)
			{
				if ((i + 1) > 9)
				{
					cout << "| " << i + 1 << "| X |";
				}
				else
					cout << "| " << i + 1 << " | X |";
			}
			else
			{
				if ((i + 1) > 9)
				{
					cout << "| " << i + 1 << "|";
				}
				else
				{
					cout << "| " << i + 1 << " |";
				}
			}
		}
		
		if (temp % 4 == 0)
		{
			cout << endl;
			newLine = true;
		}
	}
}



void Plane::planeBSeatAssignments() 
{
	int temp = 0;; //count to determint letter displayed
	bool newLine = true;

	cout << setw(21) << "(PLANE ARRANGEMENT)" << endl;

	for (int i = 0; i < seats.size(); i++)
	{

		if (newLine)
		{
			/*cout << setw(27);*/
			newLine = false;
		}

		temp = i + 1;

		if (seats[i] != "E")
		{

			if (temp == 1 || temp == 4 ||
				temp == 7 || temp == 10 || temp == 13)
			{
				cout <<"| F | X |";
			}
			else
			{
				cout <<"| F |";
			}
		}
		else
		{

			if (temp == 1 || temp == 4 ||
				temp == 7 || temp == 10 || temp == 13)
			{
				if ((i + 1) > 9)
				{
					cout << "| " << temp << "| X |";
				}
				else
					cout << "| " << temp << " | X |";
			}
			else
			{
				if ((i + 1) > 9)
				{
					cout << "| " << temp << "|";
				}
				else
				{
					cout << "| " << temp << " |";
				}
			}
		}

		if (temp % 3 == 0)
		{
			cout << endl;
			newLine = true;
		}
	}
}



vector<string> Plane::sortByName()
{
	bool swap;
	string temp;
	vector <string> sortedSeats = seats;

	do
	{
		swap = false;
		for (unsigned int i = 0; i < (sortedSeats.size() - 1); i++)
		{
			if (sortedSeats[i] > sortedSeats[i + 1])
			{
				temp = sortedSeats[i];
				sortedSeats[i] = sortedSeats[i + 1];
				sortedSeats[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);

	return sortedSeats;
}


bool Plane::findPassenger(string _passenger)
{
	bool found = false;

	for (int i = 0; i < seats.size(); i++) 
	{
		if (seats[i] == _passenger) 
		{
			found = true;
			break;
		}
	}
	
	return found;
}