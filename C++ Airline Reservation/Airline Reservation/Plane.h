#pragma once


#include<vector>
#include<string>
using namespace std;


class Plane
{

private:
	vector<string> seats;
public:
	Plane();

	void pushBack(string);
	
	bool addPassenger(int, string);
	void removePassenger(int, string);
	
	string getPassenger(int);

	bool seatAvailable(int);

	void getAvailableSeats();

	bool emptySeats();

	void seatListByName();
	void seatListBySeat();

	void listHeader();

	void planeASeatAssignments();
	void planeBSeatAssignments();

	vector<string> sortByName();
	int getUnavailableSeats(string);

	bool findPassenger(string);
};