#include "ReservationHistory.h"



ReservationHistory::ReservationHistory()
{

}



ReservationHistory::ReservationHistory(string _name, string _reservationType, string _day, int _flightNum, int _seatNum)
{
	setName(_name);
	setDay(_day);
	setReservationType(_reservationType);
	setFlightNumber(_flightNum);
	setSeatNum(_seatNum);
}



void ReservationHistory::setName(string _name) 
{
	name = _name;
}



void ReservationHistory::setDay(string _day) 
{
	day = _day;
}


void ReservationHistory::setReservationType(string _reservationType) 
{
	reservationType = _reservationType;
}


void ReservationHistory::setFlightNumber(int _flightNum) 
{
	flightNum = _flightNum;
}


void ReservationHistory::setSeatNum(int _seatNum) 
{
	seatNum = _seatNum;
}


string ReservationHistory::getName() 
{
	return name;
}



string ReservationHistory::getDay() 
{
	return day;
}


string ReservationHistory::getReservationType() 
{
	return reservationType;
}


int ReservationHistory::getFlightNumber() 
{
	return flightNum;
}


int ReservationHistory::getSeatNum() 
{
	return seatNum;
}


void ReservationHistory::displayHistory() 
{
	cout << "NAME: " << name << endl;
	cout << setw(21) << "RESERVATION TYPE: " << reservationType << endl;
	cout << setw(8) << "DAY: " << day << endl;
	cout << setw(18) << "FLIGHT NUMBER: " << flightNum << endl;
	cout << setw(16) << "SEAT NUMBER: " << seatNum+1 << endl;
	cout << endl;
}