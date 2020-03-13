#pragma once

#include<string>
#include<iostream>
#include <iomanip>
using namespace std;



class ReservationHistory 
{
	private:
		string name;
		string reservationType; //Cancel or Booking
		string day;
		int flightNum;
		int seatNum;
	public:
		ReservationHistory();
		ReservationHistory(string, string, string, int, int);

		void setName(string);
		void setDay(string);
		void setReservationType(string);
		void setFlightNumber(int);
		void setSeatNum(int);

		string getName();
		string getDay();
		string getReservationType();
		int getFlightNumber();
		int getSeatNum();

		void displayHistory();
};