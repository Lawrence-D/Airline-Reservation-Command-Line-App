#include "ReservationMenu.h"



ReservationMenu::ReservationMenu() 
{
	readPlaneFiles();
	/*readHistory();*/
	mainMenu();
}



void ReservationMenu::mainMenu() 
{
	int choice;

	do
	{

		system("CLS");
		cout << "\n\n\n";
		cout << setw(50) <<"****AIRLINE RESERVATION MENU****" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "1) Book Flight Reservation" << endl;
		cout << "2) Cancel Flight Reservation" << endl;
		cout << "3) Exit Reservation Menu" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE AN OPTION: ";
		cin >> choice;

		while (cin.fail() || choice < 1 || choice > 3)
		{
			system("CLS");
			cout << "\n\n";
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << setw(50) << "****AIRLINE RESERVATION MENU****" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cout << "1) Book Flight Reservation" << endl;
			cout << "2) Cancel Flight Reservation" << endl;
			cout << "3) Exit Reservation Menu" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE AN OPTION: ";
			cin >> choice;
		}
	} while (choice < 1 || choice > 3);

	switch (choice)
	{
	case 1:
		dayBookingMenu();
		break;
	case 2:
		dayCancelBookingMenu();
		break;
	default:
		break;
	}

	/*writeHistory();*/
	system("CLS");
	cout << "RESERVATION SYSTEM IS CLOSING AND THE FLIGHT SCHEDULES HAVE BEEN UPDATED..." << endl;

}

//Booking menu to choose a day to book a flight
void ReservationMenu::dayBookingMenu() 
{
	int choice;
	menuStatus = true; //Booking
	do
	{
		system("CLS");
		displayMenuStatus();
		cout << "\n\n";
		cout << setw(45) << "****DAY BOOKING MENU****" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "1) Book Monday Flight" << endl;
		cout << "2) Book Tuesday Flight" << endl;
		cout << "3) Book Wednesday Flight" << endl;
		cout << "4) Book Thursday Flight" << endl;
		cout << "5) Book Friday Flight" << endl;
		cout << "6) Book Saturday Flight" << endl;
		cout << "7) Book Sunday Flight" << endl;
		cout << "8) Go Back to Main Menu" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE DAY OPTION: ";
		cin >> choice;

		while (cin.fail() || choice < 1 || choice > 8)
		{
			system("CLS");
			displayMenuStatus();
			cout << endl;
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << setw(45) << "****DAY BOOKING MENU****" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cout << "1) Book Monday Flight" << endl;
			cout << "2) Book Tuesday Flight" << endl;
			cout << "3) Book Wednesday Flight" << endl;
			cout << "4) Book Thursday Flight" << endl;
			cout << "5) Book Friday Flight" << endl;
			cout << "6) Book Saturday Flight" << endl;
			cout << "7) Book Sunday Flight" << endl;
			cout << "8) Go Back to Main Menu" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE DAY OPTION: ";
			cin >> choice;
		}

	} while (choice < 1 || choice > 8);

	switch (choice)
	{
	case 8:
		mainMenu();
		break;
	default:
		viewMenu(choice);
		break;
	}
}


//Day cancellation menu
void ReservationMenu::dayCancelBookingMenu() 
{
	int choice;
	menuStatus = false;
	do
	{
		system("CLS");
		displayMenuStatus();
		cout << "\n\n";
		cout << setw(48)<< "****DAY CANCELLATION MENU****" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "1) Cancel Monday Flight" << endl;
		cout << "2) Cancel Tuesday Flight" << endl;
		cout << "3) Cancel Wednesday Flight" << endl;
		cout << "4) Cancel Thursday Flight" << endl;
		cout << "5) Cancel Friday Flight" << endl;
		cout << "6) Cancel Saturday Flight" << endl;
		cout << "7) Cancel Sunday Flight" << endl;
		cout << "8) Go Back to Main Menu" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE DAY OPTION: ";
		cin >> choice;

		while (cin.fail() || choice < 1 || choice > 8)
		{
			system("CLS");
			displayMenuStatus();
			cout << endl;
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << setw(48) << "****DAY CANCELLATION MENU****" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cout << "1) Cancel Monday Flight" << endl;
			cout << "2) Cancel Tuesday Flight" << endl;
			cout << "3) Cancel Wednesday Flight" << endl;
			cout << "4) Cancel Thursday Flight" << endl;
			cout << "5) Cancel Friday Flight" << endl;
			cout << "6) Cancel Saturday Flight" << endl;
			cout << "7) Cancel Sunday Flight" << endl;
			cout << "8) Go Back to Main Menu" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE DAY OPTION: ";
			cin >> choice;
		}

	} while (choice < 1 || choice > 8);

	switch (choice)
	{
	case 8:
		mainMenu();
		break;
	default:
		viewMenu(choice);
		break;
	}
}



//Menu on how flights will be displayed
void ReservationMenu::viewMenu(int dayValue)
{
	int choice;
	string day = convertDay(dayValue);

	do {
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		cout << setw(45) << "****FLIGHTS VIEW MENU****" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "1) View by Start City" << endl;
		cout << "2) View by Destination City" << endl;
		cout << "3) View by Depart Time" << endl;
		cout << "4) View by Arrival Time" << endl;
		cout << "5) View by Flight Number" << endl;
		cout << "6) View by Frequent Flyer Points" << endl;
		cout << "7) Go Back to Prior Menu" << endl;
		cout << "8) Exit to Main Menu" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE FLIGHT VIEW OPTION: ";
		cin >> choice;

		while (cin.fail() || choice < 1 || choice > 8) 
		{
			system("CLS");
			displayMenuStatus();
			cout << "DAY: " << day << endl;
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << setw(45) << "****FLIGHTS VIEW MENU****" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cout << "1) View by Start City" << endl;
			cout << "2) View by Destination City" << endl;
			cout << "3) View by Depart Time" << endl;
			cout << "4) View by Arrival Time" << endl;
			cout << "5) View by Flight Number" << endl;
			cout << "6) View by Frequent Flyer Points" << endl;
			cout << "7) Go Back to Prior Menu" << endl;
			cout << "8) Exit to Main Menu" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE FLIGHT VIEW OPTION: ";
			cin >> choice;
		}
	} while (choice  < 1 || choice > 8);


	switch (choice) 
	{
		case 7:
			if (menuStatus)
			{
				dayBookingMenu();
			}
			else
				dayCancelBookingMenu();
			break;
		case 8:
			mainMenu();
			break;
		default:
			initiateSortSelection(choice, dayValue);
			displayChosenFlightViewMenu(choice, dayValue);
			break;
	}
}



//Displays flights by the chosen way to view them
void ReservationMenu::displayChosenFlightViewMenu(int selection, int dayValue) 
{
	initiateSortSelection(selection, dayValue); //

	int flightChoice = 0;
	string day = convertDay(dayValue);

	do {
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		getSortedFlightViewHeader(selection);
		flightScheduleHeader();

		for (unsigned int i = 0; i < tempFlights.size(); i++)
		{
			if (i < 9)//Formats first 9 numbers to align with double digit numbers in a vertical line
			{
				cout << " " << i + 1 << ") ";
			}
			else
				cout << i + 1 << ") ";

			if (tempFlights[i].emptySeats())
			{
				tempFlights[i].displayFlightSchedule();
				cout << setw(30) << "AVAILABLE" << endl;
			}
			else
			{
				tempFlights[i].displayFlightSchedule();
				cout << setw(30) << "UNAVAILABLE" << endl;
			}
		}
		cout << "34)" << setw(20) << "EXIT TO PRIOR MENU" << endl;
		cout << "35)" << setw(19) << "EXIT TO MAIN MENU" << endl;
		printLongLine();
		cout << "CHOOSE A FLIGHT OPTION: ";
		cin >> flightChoice;

		if (cin.fail())//might cause problems
		{
			cin.clear();
			cin.ignore(80, '\n');
			displayChosenFlightViewMenu(selection, dayValue);
		}

	} while (flightChoice < 1 || flightChoice > 35);

	

	if (flightChoice == 34) 
	{
		viewMenu(dayValue);
	}
	else if(flightChoice == 35)
	{
		mainMenu();
	}
	else if (menuStatus && !tempFlights[flightChoice-1].emptySeats()) //if booking is true it blocks unavailable flights
	{
		flightChoice--; //reduces element value to actual flight positon
		if (availableSeatsForSuggestion(selection, flightChoice))
		{
			system("CLS");
			displayMenuStatus();
			cout << "\n\nSorry that flight is unavailable for booking.\n" << endl;
			cout << "Press enter to continue to the Suggested Flight Menu...";
			cin.ignore();
			cin.get();
			suggestFlightsMenu(flightChoice, dayValue, selection);
		}
		else
		{
			system("CLS");
			displayMenuStatus();
			cout << "\n\nSorry that flight is unavailable for booking.\n" << endl;
			cout << "Press enter to choose another flight...";
			cin.ignore();
			cin.get();
			displayChosenFlightViewMenu(selection, dayValue);
			/*viewMenu(dayValue);*/
		}
	}
	else 
	{
		//Should go through for cancellation or booking
		flightChoice--; //reduces element value to actual flight positon
		viewSeatMenu(selection, dayValue, flightChoice); //Choose way to view the seating list of the plane
	}
		
}


//Check if any flight has open seats
bool ReservationMenu::availableSeatsForSuggestion(int selection, int flightNum) 
{
	int i = flightNum;
	const int NUM_DAYS = 7;
	
	for (int p = 0; p < NUM_DAYS; p++)
	{
		initiateSortSelection(selection, p + 1); //view choice, 

		if (tempFlights[i].emptySeats())
		{
			return true;
		}
	}
	return false;
}


void ReservationMenu::suggestFlightsMenu(int flightChoice, int dayValue, int selection)
{
	int i = flightChoice;
	const int NUM_DAYS = 7;
	int newFlightChoice, 
		priorNum = 8, 
		exitNum = 9;

	string day = convertDay(dayValue);

	do
	{
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		cout << setw(110) << "****SUGGESTED AVAILABLE FLIGHT MENU****" << endl;
		flightScheduleHeader();
		cout << setw(4) << "";
		tempFlights[i].displayFlightSchedule();
		cout << setw(30) << "UNAVAILABLE" << endl;
		printLongLine();

		for(int p = 0; p < NUM_DAYS; p++)
		{
			initiateSortSelection(selection, p+1); //view choice, 
			cout << p+1 << ") " << convertDay(p+1);

			if (tempFlights[i].emptySeats())
			{
				cout << " - AVAILABLE" << endl;
			}
			else
			{
				cout << " - UNAVAILABLE" << endl;
			}
		}
		cout << priorNum << ") Exit to Prior Menu" << endl;
		cout << exitNum << ") Exit to Main Menu" << endl;
		printLongLine();
		cout << "CHOOSE AVAILABLE FLIGHT: ";
		cin >> newFlightChoice;

		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore(80, '\n');
			suggestFlightsMenu(flightChoice, dayValue, selection);
		}

	} while (newFlightChoice < 1 || newFlightChoice > exitNum);

	
	switch(newFlightChoice)
	{
	case 1:
		dayValue = 1;
		initiateSortSelection(selection, dayValue);
		flightValidation(flightChoice, dayValue, selection);
		viewSeatMenu(selection, dayValue, flightChoice);
		break;
	case 2:
		dayValue = 2;
		initiateSortSelection(selection, dayValue);
		flightValidation(flightChoice, dayValue, selection);
		viewSeatMenu(selection, dayValue, flightChoice);
		break;
	case 3:
		dayValue = 3;
		initiateSortSelection(selection, dayValue);
		flightValidation(flightChoice, dayValue, selection);
		viewSeatMenu(selection, dayValue, flightChoice);
		break;
	case 4:
		dayValue = 4;
		initiateSortSelection(selection, dayValue);
		flightValidation(flightChoice, dayValue, selection);
		viewSeatMenu(selection, dayValue, flightChoice);
		break;
	case 5:
		dayValue = 5;
		initiateSortSelection(selection, dayValue);
		flightValidation(flightChoice, dayValue, selection);
		viewSeatMenu(selection, dayValue, flightChoice);
		break;
	case 6:
		dayValue = 6;
		initiateSortSelection(selection, dayValue);
		flightValidation(flightChoice, dayValue, selection);
		viewSeatMenu(selection, dayValue, flightChoice);
		break;
	case 7:
		dayValue = 7;
		initiateSortSelection(selection, dayValue);
		flightValidation(flightChoice, dayValue, selection);
		viewSeatMenu(selection, dayValue, flightChoice);
		break;
	case 8:
		displayChosenFlightViewMenu(selection, dayValue);
		break;
	case 9:
		mainMenu();
		break;
	default:
		break;
	}


}

void ReservationMenu::flightValidation(int flightChoice, int dayValue, int selection) 
{
	//flightChoice is already reduced from the last menu
	if (!tempFlights[flightChoice].emptySeats()) 
	{
		system("CLS");
		displayMenuStatus();
		cout << "\nSorry that flight is unavailable for booking.\n" << endl;
		cout << "Press enter to return to the Suggested Flight Menu...";
		cin.ignore();
		cin.get();
		suggestFlightsMenu(flightChoice, dayValue, selection);
	}
}


//Menu to choose the ways to view availble seats on a plane
void ReservationMenu::viewSeatMenu(int selection, int dayValue, int flightChoice)
{
	string day = convertDay(dayValue);
	int viewChoice;

	do
	{
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		cout << setw(45) <<"****SEAT VIEWING MENU****" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "1) View by Name" << endl;
		cout << "2) View by Seat Number" << endl;
		cout << "3) Exit to Prior Menu" << endl;
		cout << "4) Exit to Main Menu" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE SEAT VIEW OPTION: ";
		cin >> viewChoice;

		while (cin.fail() || viewChoice < 1 || viewChoice > 4)
		{
			system("CLS");
			displayMenuStatus();
			cout << "DAY: " << day << endl;
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << setw(45) << "****SEAT VIEWING MENU****" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cout << "1. View by Name" << endl;
			cout << "2. View by Seat Number" << endl;
			cout << "3) Exit to Prior Menu" << endl;
			cout << "4) Exit to Main Menu" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE SEAT VIEW OPTION: ";
			cin >> viewChoice;
		}
	} while (viewChoice < 1 || viewChoice > 4);

	switch (viewChoice)
	{
	case 3:
		displayChosenFlightViewMenu(selection, dayValue);
		break;
	case 4:
		mainMenu();
		break;
	default:
		viewFlightSeatsMenu(flightChoice, dayValue, viewChoice, selection);
		break;
	}
}



void ReservationMenu::viewFlightSeatsMenu(int element, int dayValue, int viewChoice, int selection)
{

	int seat, //choice of seat
		p = element, //plane position 
		priorNum,
		exitNum; //exit value 

	string day = convertDay(dayValue);

	do
	{
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		cout << setw(45) <<"****SEATS FOR FLIGHT NUMBER " << tempFlights[p].getFlightNum() << "****" << endl;
		cout << "--------------------------------------------------------------------" << endl;

		viewPlaneSeatArrangement(p);
		
		switch (viewChoice) 
		{
			case 1: 
				tempFlights[p].seatListByName();
				break;
			case 2:
				tempFlights[p].seatListBySeat();
				break;
			default:
				break;
		}

		//Determines exit choice
		if (tempFlights[p].getAircraftType() == "A")
		{
			priorNum = 21;
			exitNum = 22;
		}
		else 
		{
			priorNum = 16;
			exitNum = 17;
		}
		cout << setw(11) << priorNum << setw(25) << "EXIT TO PRIOR MENU" << endl;
		cout << setw(11) << exitNum << setw(25) << "EXIT TO MAIN MENU" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE SEAT NUMBER: ";
		cin >> seat;

		while (cin.fail() || seat < 1 || seat > exitNum) 
		{
			system("CLS");
			displayMenuStatus();
			cout << "DAY: " << day << endl;
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << setw(45) << "****SEATS FOR FLIGHT NUMBER " << tempFlights[p].getFlightNum() << "****" << endl;
			cout << "--------------------------------------------------------------------" << endl;

			viewPlaneSeatArrangement(p);

			switch (viewChoice)
			{
			case 1:
				tempFlights[p].seatListByName();
				break;
			case 2:
				tempFlights[p].seatListBySeat();
				break;
			default:
				break;
			}

			//Determines exit choice
			if (tempFlights[p].getAircraftType() == "A")
			{
				priorNum = 21;
				exitNum = 22;
			}
			else
			{
				priorNum = 16;
				exitNum = 17;
			}
			cout << setw(11) << priorNum << setw(25) << "EXIT TO PRIOR MENU" << endl;
			cout << setw(11) << exitNum << setw(25) << "EXIT TO MAIN MENU" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE SEAT NUMBER: ";
			cin >> seat;
		}

	} while (seat < 1 || seat > exitNum);
	

	if (seat == priorNum)
	{
		viewSeatMenu(selection, dayValue, element);//not correct menu needs to be view menu
	}
	else if (seat == exitNum) 
	{
		mainMenu();
	}
	else if(menuStatus) //booking
	{
		if (!tempFlights[p].seatAvailable(seat - 1))
		{
			system("CLS");
			displayMenuStatus();
			cout << "\nSorry that seat is unavailable for booking. Please choose another seat." << endl;
			cout << endl;
			cout << "Press enter to continue..." << endl;
			cin.ignore();
			cin.get();
			viewFlightSeatsMenu(element, dayValue, viewChoice, selection);
		}
		else
		{
			seat--; //Becomes actual element
			int flightNum = tempFlights[p].getFlightNum();
			finalBookingMenu(element, dayValue, viewChoice, selection, seat, flightNum);
		}
	}
	else //Cancellation
	{
		if (tempFlights[p].seatAvailable(seat - 1))
		{
			system("CLS");
			displayMenuStatus();
			cout << "\nSorry that seat is empty. Please choose passenger to remove." << endl;
			cout << endl;
			cout << "Press enter to continue..." << endl;
			cin.ignore();
			cin.get();
			viewFlightSeatsMenu(element, dayValue, viewChoice, selection);
		}
		else
		{
			seat--; //Becomes actual element
			int flightNum = tempFlights[p].getFlightNum();
			finalCancellationMenu(element, dayValue, viewChoice, selection, seat, flightNum);
		}
	}
}



void ReservationMenu::finalCancellationMenu(int pElement, int dayValue, int viewChoice, int selection, int seatNum, int flightNum)
{
	int choice,
		p = pElement; //Plane position
	string day = convertDay(dayValue),
		name = tempFlights[p].getPassenger(seatNum);

	do 
	{
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		cout << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "Would you like to remove " << name << "?" << endl;
		cout << "1) Yes" << endl;
		cout << "2) No (Exit to Prior Menu)" << endl;
		cout << "3) Exit to Main Menu" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE OPTION: ";
		cin >> choice;

		while (cin.fail() || choice < 1 || choice > 3)
		{
			system("CLS");
			displayMenuStatus();
			cout << "DAY: " << day << endl;
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cout << "Would you like to remove " << name << " from flight " << tempFlights[p].getFlightNum() << "?" << endl;
			cout << "1) Yes" << endl;
			cout << "2) No (Exit to Prior Menu)" << endl;
			cout << "3) Exit to Main Menu" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE OPTION: ";
			cin >> choice;
		}
	} while (choice < 1 || choice > 3);


	switch (choice) 
	{
		case 1:
			cancelFlight(seatNum, dayValue, flightNum, name); //remove passenger
			writePlaneFiles();
			mainMenu();
			break;
		case 2:
			viewFlightSeatsMenu(pElement, dayValue, viewChoice, selection);
			break;
		case 3:
			mainMenu();
			break;
		default:
			break;	
	}

	mainMenu();
}



void ReservationMenu::cancelFlight(int seatNum, int dayValue, int flightNum, string fullName)
{
	int p = getFlightScheduleElement(flightNum, dayValue);

	string day = convertDay(dayValue);

	/*ReservationHistory newHistory(fullName, "CANCELLATION", day, flightNum, seatNum);
	history.push_back(newHistory);*/

	switch (dayValue)
	{
	case 1:
		mondayFlights[p].removePassenger(seatNum, fullName);
		break;
	case 2:
		tuesdayFlights[p].removePassenger(seatNum, fullName);
		break;
	case 3:
		wednesdayFlights[p].removePassenger(seatNum, fullName);
		break;
	case 4:
		thursdayFlights[p].removePassenger(seatNum, fullName);
		break;
	case 5:
		fridayFlights[p].removePassenger(seatNum, fullName);
		break;
	case 6:
		saturdayFlights[p].removePassenger(seatNum, fullName);
		break;
	case 7:
		sundayFlights[p].removePassenger(seatNum, fullName);
		break;
	default:
		break;
	}
}



void ReservationMenu::finalBookingMenu(int element, int dayValue, int viewChoice, int selection, int seatNum, int flightNum)
{
	string
		firstName,
		lastName,
		fullName,
		day = convertDay(dayValue);

	int choice;

	do
	{
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		cout << endl;
		cout << "Enter the passenger's first name: ";
		cin >> firstName;

		cout << endl;
		cout << "Enter the passenger's last name: ";
		cin >> lastName;

		fullName = firstName + " " + lastName;
		system("CLS");
		displayMenuStatus();
		cout << "DAY: " << day << endl;
		cout << endl;
		cout << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "Full Name: " << fullName << endl;
		cout << endl;
		cout << "Is this data correct?" << endl;
		cout << endl;
		cout << "1) Yes" << endl;
		cout << "2) No" << endl;
		cout << "3) Exit to Prior Menu" << endl;
		cout << "4) Exit to Main Menu" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CHOOSE OPTION: ";
		cin >> choice;

		while (cin.fail() || choice < 1 || choice > 4)
		{
			system("CLS");
			displayMenuStatus();
			cout << "DAY: " << day << endl;
			cout << endl;
			cout << endl;
			cout << "Enter the passenger's first name: ";
			cin >> firstName;

			cout << endl;
			cout << "Enter the passenger's last name: ";
			cin >> lastName;

			fullName = firstName + " " + lastName;
			system("CLS");
			displayMenuStatus();
			cout << "DAY: " << day << endl;
			cout << endl;
			cout << "ERROR INCORRECT DATA WAS ENTERED." << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cout << "Full Name: " << fullName << endl;
			cout << endl;
			cout << "Is this data correct?" << endl;
			cout << endl;
			cout << "1) Yes" << endl;
			cout << "2) No" << endl;
			cout << "3) Exit to Prior Menu" << endl;
			cout << "4) Exit to Main Menu" << endl;
			cin.clear();
			cin.ignore(80, '\n');
			cout << "--------------------------------------------------------------------" << endl;
			cout << "CHOOSE OPTION: ";
			cin >> choice;
		}
	} while (choice < 1 || choice > 4);

	switch (choice) 
	{
		case 1:
			if (tempFlights[element].findPassenger(fullName)) //If name is already booked on the plane
			{
				system("CLS");
				displayMenuStatus();
				cout << "\nSorry that person is already booked on this flight.\n" << endl;
				cout << "Press enter to continue...";
				cin.ignore();
				cin.get();
				finalBookingMenu(element, dayValue, viewChoice, selection, seatNum, flightNum);
			}
			else 
			{
				bookFlight(seatNum, dayValue, flightNum, fullName);
				writePlaneFiles();
				mainMenu();
			}
			break;
		case 2:
			finalBookingMenu(element, dayValue, viewChoice, selection, seatNum, flightNum);
			break;
		case 3:
			viewFlightSeatsMenu(element, dayValue, viewChoice, selection);
			break;
		case 4:
			mainMenu();
			break;
		default:
			break;
	}
}



void ReservationMenu::bookFlight(int seatNum, int dayValue, int flightNum, string fullName)
{
	int p = getFlightScheduleElement(flightNum, dayValue);

	string day = convertDay(dayValue);

	/*ReservationHistory newHistory(fullName, "BOOKING", day, flightNum, seatNum);
	history.push_back(newHistory);*/

	switch (dayValue)
	{
	case 1:
		mondayFlights[p].addPassenger(seatNum, day, fullName);
		break;
	case 2:
		tuesdayFlights[p].addPassenger(seatNum, day, fullName);
		break;
	case 3:
		wednesdayFlights[p].addPassenger(seatNum, day, fullName);
		break;
	case 4:
		thursdayFlights[p].addPassenger(seatNum, day, fullName);
		break;
	case 5:
		fridayFlights[p].addPassenger(seatNum, day, fullName);
		break;
	case 6:
		saturdayFlights[p].addPassenger(seatNum, day, fullName);
		break;
	case 7:
		sundayFlights[p].addPassenger(seatNum, day, fullName);
		break;
	default:
		break;
	}
}




int ReservationMenu::getFlightScheduleElement(int flightNum, int dayValue) 
{
	copyFlights(dayValue);

	int i = 0;

	for (; i < tempFlights.size(); i++) 
	{
		if (flightNum == tempFlights[i].getFlightNum()) 
		{
			break;
		}
	}
	return i;
}


void ReservationMenu::viewPlaneSeatArrangement(int element)
{
	int p = element;

	if (tempFlights[p].getAircraftType() == "A")
	{
		tempFlights[p].displayPlaneA();
	}
	else
	{
		tempFlights[p].displayPlaneB();
	}
}



void ReservationMenu::initiateSortSelection(int choice, int dayValue)
{
	copyFlights(dayValue); 

	switch (choice)
	{
	case 1:
		SortFlightSchedules::sortFlightByFrom(tempFlights);
		break;
	case 2:
		SortFlightSchedules::sortFlightByTo(tempFlights);
		break;
	case 3:
		SortFlightSchedules::sortFlightByDeparture(tempFlights);
		break;
	case 4:
		SortFlightSchedules::sortFlightByArrival(tempFlights);
		break;
	case 5:
		SortFlightSchedules::sortFlightByCode(tempFlights);
		break;
	case 6:
		SortFlightSchedules::sortFlightByPoints(tempFlights);
		break;
	default:
		break;
	}
}



//Makes a copy of the flights to do manipulation
void ReservationMenu::copyFlights(int dayValue)
{
	tempFlights.clear();

	switch (dayValue)
	{
	case 1:
		tempFlights = mondayFlights;
		break;
	case 2:
		tempFlights = tuesdayFlights;
		break;
	case 3:
		tempFlights = wednesdayFlights;
		break;
	case 4:
		tempFlights = thursdayFlights;
		break;
	case 5:
		tempFlights = fridayFlights;
		break;
	case 6:
		tempFlights = saturdayFlights;
		break;
	case 7:
		tempFlights = sundayFlights;
		break;
	default:
		break;
	}
}



string ReservationMenu::convertDay(int dayValue)
{
	string day;

	switch (dayValue)
	{
	case 1:
		day = "MONDAY";
		break;
	case 2:
		day = "TUESDAY";
		break;
	case 3:
		day = "WEDNESDAY";
		break;
	case 4:
		day = "THURSDAY";
		break;
	case 5:
		day = "FRIDAY";
		break;
	case 6:
		day = "SATURDAY";
		break;
	case 7:
		day = "SUNDAY";
		break;
	}

	return day;
}

void ReservationMenu::printLongLine() 
{
	cout << "-----------------------------------------------------------------";
	cout << "----------------------------------------------------------------";
	cout << "-----------------------------------------------------------" << endl;
}


//Chooses header viewing by Arrival, Destination, Depart Time, Arrival Time, Flight Number, and Frequent Flyer Points
void ReservationMenu::getSortedFlightViewHeader(int choice)
{
	switch (choice)
	{
	case 1:
		cout << setw(110) << "****FLIGHTS SORTED BY START CITY****" << endl;
		break;
	case 2:
		cout << setw(115) << "****FLIGHTS SORTED BY DESTINATION CITY****" << endl;
		break;
	case 3:
		cout << setw(110) << "****FLIGHTS SORTED BY DEPART TIME****" << endl;
		break;
	case 4:
		cout << setw(110) << "****FLIGHTS SORTED BY ARRIVAL TIME****" << endl;
		break;
	case 5:
		cout << setw(110) << "****FLIGHTS SORTED BY FLIGHT NUMBER****" << endl;
		break;
	case 6:
		cout << setw(115) << "****FLIGHTS SORTED BY FREQUENT FLYER POINTS****" << endl;
		break;
	default:
		break;
	}
}


//Flight Schedule header
void ReservationMenu::flightScheduleHeader()
{
	cout << "-----------------------------------------------------------------";
	cout << "----------------------------------------------------------------";
	cout << "-----------------------------------------------------------" << endl;
	cout << setw(8) << "FROM" << setw(19) << "TO" << setw(27) << "DEPART TIME";
	cout << setw(27) << "ARRIVAL TIME" << setw(27) << setw(27) << "PLANE TYPE" << setw(27);
	cout << "FLIGHT NUMBER" << setw(19) << "POINTS" << setw(30) << "SEAT AVAILABILITY" << endl;
	cout << "-----------------------------------------------------------------";
	cout << "----------------------------------------------------------------";
	cout << "-----------------------------------------------------------" << endl;
}


void ReservationMenu::displayMenuStatus()
{
	if (menuStatus)
		cout << "FOR BOOKING" << endl;
	else
		cout << "FOR CANCELLATION" << endl;
}



////Displays Reservation history
//void ReservationMenu::showHistory() //stop from reading empty vector
//{
//	system("CLS");
//	cout << "\n\n\n";
//	cout << setw(48) << "****RESERVATION HISTORY****" << endl;
//	cout << "--------------------------------------------------------------------" << endl;
//	for (int i = 0; i < history.size(); i++)
//	{
//		cout << i + 1 << ". ";
//		history[i].displayHistory();
//	}
//	cout << "--------------------------------------------------------------------" << endl;
//	cout << "Press enter to return to main menu..." << endl;
//	cin.ignore();
//	cin.get();
//}


//void ReservationMenu::readHistory()
//{
//	ifstream inputFile1;
//
//	string _firstName, _lastName, _day, _type;
//	int _flightNum, _seat;
//
//	inputFile1.open("reservationHistory.txt");
//
//	if (inputFile1.fail()) 
//	{
//		cout << "ERROR opening reservationHistory.txt...." << endl;
//		exit(0);
//	}else
//	{
//		while (inputFile1) 
//		{
//			inputFile1 >> _firstName >> _lastName;
//			inputFile1 >> _type;
//			inputFile1 >> _day;
//			inputFile1 >> _flightNum;
//			inputFile1 >> _seat;
//
//			string _fullName = _firstName + " " + _lastName;
//
//			ReservationHistory newHistory(_fullName, _type, _day, _flightNum, _seat);
//			
//			history.push_back(newHistory);
//
//			if (inputFile1.eof()) 
//			{
//				break;
//			}
//		}
//		
//		inputFile1.close();
//	}
//}


//void ReservationMenu::writeHistory() 
//{
//	
//	ofstream outputFile1;
//
//	outputFile1.open("reservationHistory.txt");
//
//	if (outputFile1.fail())
//	{
//		cout << "ERROR opening reservationHistory.txt..." << endl;
//		exit(0);
//	}
//	else
//	{
//		for (int i = 0; i < history.size(); i++) 
//		{
//			outputFile1 << history[i].getName() << endl;
//			outputFile1 << history[i].getReservationType() << endl;
//			outputFile1 << history[i].getDay() << endl;
//			outputFile1 << history[i].getFlightNumber() << endl;
//			outputFile1 << history[i].getSeatNum() << endl;
//		}
//		outputFile1.close();
//	}
//}



//All data in plane files delimited by $ character
void ReservationMenu::readPlaneFiles()
{

	ifstream inputFile1;
	ifstream inputFile2;
	ifstream inputFile3;

	string _startCity, _destinationCity, _departTime, _arrivalTime, _aircraftType, _seatData;
	int _flightNum, _numSeats, _flyerPoints;

	inputFile1.open("flightSchedules.txt");
	inputFile2.open("planeA.txt");
	inputFile3.open("planeB.txt");


	if (inputFile1.fail() || inputFile2.fail() || inputFile3.fail())
	{

		cout << "ERROR opening files...." << endl;
		exit(0);
	}
	else
	{
		//count is the days of the week
		for (int count = 0; count < 7; count++)
		{
			while (true)
			{

				inputFile1 >> _startCity >> _destinationCity >> _departTime >> _arrivalTime >>
					_flightNum >> _aircraftType >> _flyerPoints >> _numSeats;

				FlightSchedule flightSchedule(_startCity, _destinationCity, _departTime, _arrivalTime,
					_flightNum, _aircraftType, _flyerPoints, _numSeats);

				if (_aircraftType == "A")
				{
					for (int i = 0; i < _numSeats; i++)
					{
						getline(inputFile2, _seatData, '$');

						flightSchedule.addSeat(_seatData);
					}
					addFlightSchedule(count, flightSchedule);
				}

				/*if (inputFile2.eof())
				break;*/

				if (_aircraftType == "B")
				{
					for (int i = 0; i < _numSeats; i++)
					{

						getline(inputFile3, _seatData, '$');

						flightSchedule.addSeat(_seatData);
					}
					addFlightSchedule(count, flightSchedule);
				}

				if (inputFile1.eof()) //Flight Schedule File
					break;
			}
			inputFile1.close();
			inputFile1.open("flightSchedules.txt");
			if (inputFile1.fail())
			{
				cout << "ERROR re-opening flightSchedules.txt..." << endl;
				exit(0);
			}
		}
		inputFile1.close();
		inputFile2.close();
		inputFile3.close();
	}
}



//Writes PlaneA and PlaneB data back to files
void ReservationMenu::writePlaneFiles()
{

	ofstream outputFile1;
	ofstream outputFile2;

	outputFile1.open("planeA.txt");
	outputFile2.open("planeB.txt");

	if (outputFile1.fail() || outputFile2.fail())
	{
		cout << "ERROR opening files..." << endl;
		exit(0);
	}
	else
	{
		for (int count = 0; count <= 7; count++)
		{
			copyFlights(count);

			for (int i = 0; i < tempFlights.size(); i++)
			{

				if (tempFlights[i].getAircraftType() == "A")
				{
					for (int p = 0; p < tempFlights[i].getNumSeats(); p++)
					{
						outputFile1 << tempFlights[i].getPassenger(p) << "$";
					}
				}

				if (tempFlights[i].getAircraftType() == "B")
				{
					for (int p = 0; p < tempFlights[i].getNumSeats(); p++)
					{

						outputFile2 << tempFlights[i].getPassenger(p) << "$";
					}
				}
			}
		}
		outputFile1.close();
		outputFile2.close();
	}
}



void ReservationMenu::addFlightSchedule(int _count, FlightSchedule _flightSchedule)
{
	switch (_count)
	{
	case 0:
		mondayFlights.push_back(_flightSchedule);
		break;
	case 1:
		tuesdayFlights.push_back(_flightSchedule);
		break;
	case 2:
		wednesdayFlights.push_back(_flightSchedule);
		break;
	case 3:
		thursdayFlights.push_back(_flightSchedule);
		break;
	case 4:
		fridayFlights.push_back(_flightSchedule);
		break;
	case 5:
		saturdayFlights.push_back(_flightSchedule);
		break;
	case 6:
		sundayFlights.push_back(_flightSchedule);
		break;
	}
}