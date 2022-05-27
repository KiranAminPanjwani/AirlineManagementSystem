//  Airline Management System

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Class for selecting flight destinations of your choice

class flightDetails
{

	int flightSerial[15] = {101, 102, 103, 122, 123, 124, 131, 132, 133, 241, 242, 243, 501, 502, 503};
	int price[16] = {12000, 10000, 15000, 11000, 14000, 10000, 12000, 13500, 9000, 12500, 14000, 12000, 16000, 16500, 13500};
	int selectFlight;
	int perPersonPrice;

public:
	void lahore()
	{
		cout << "\n\n Flights available for Lahore:";
		cout << "\n  " << flightSerial[0] << "-Flight (time: 5:00pm) " << price[0] << "/- per person";
		cout << "\n  " << flightSerial[1] << "-Flight (time: 12:00am) " << price[1] << "/- per person";
		cout << "\n  " << flightSerial[2] << "-Flight (time: 8:00pm)" << price[2] << "/- per person";

		cout << "\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 0; i < 3; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void karachi()
	{
		cout << "\n You have chosen Karachi.";
		cout << "\n Flights available for Karachi:";
		cout << "\n  " << flightSerial[3] << "-Flight (time: 3:00pm)" << price[3] << "/- per person";
		cout << "\n  " << flightSerial[4] << "-Flight (time: 7:00pm)" << price[4] << "/- per person";
		cout << "\n  " << flightSerial[5] << "-Flight (time: 2:00am)" << price[5] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 3; i <= 5; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void islamabad()
	{
		cout << "\n You have chosen Islamabad.";
		cout << "\n Flights available for Islamabad:";
		cout << "\n  " << flightSerial[6] << "-Flight (time: 4:00pm)" << price[6] << "/- per person";
		cout << "\n  " << flightSerial[7] << "-Flight (time: 9:00pm)" << price[7] << "/- per person";
		cout << "\n  " << flightSerial[8] << "-Flight (time: 2:00am)" << price[8] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 6; i <= 8; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void peshawar()
	{
		cout << "\n You have chosen Peshawar.";
		cout << "\n Flights available for Peshawar:";
		cout << "\n  " << flightSerial[9] << "-Flight (time: 5:00pm)" << price[9] << "/- per person";
		cout << "\n  " << flightSerial[10] << "-Flight (time: 6:00pm)" << price[10] << "/- per person";
		cout << "\n  " << flightSerial[11] << "-Flight (time: 1:00am)" << price[11] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 9; i <= 11; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void quetta()
	{
		cout << "\n Flights available for Quetta:";
		cout << "\n  " << flightSerial[12] << "-Flight (time: 4:00am)" << price[12] << "/- per person";
		cout << "\n  " << flightSerial[13] << "-Flight (time: 3:00pm)" << price[13] << "/- per person";
		cout << "\n  " << flightSerial[14] << "-Flight (time: 6:00am)" << price[14] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 12; i <= 14; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

	// Set Price of per person

	void setPerPersonPrice(int price)
	{
		perPersonPrice = price;
	}

	// Get Price of per person

	int getperPersonPrice()
	{
		return perPersonPrice;
	}
};


//--------------------------------------------------------------------------------------------------

// Class Node for declaring required inputs

class Node
{
public:
	string name, date, currentLocation, destination, gender, CNIC;
	int age, bookingCode, ticketSerialNo;
	float fare;
	Node *next;
};

// Class for the main process of booking tickets

class bookingProcedureOfTicket
{

private:
	Node *head;
	Node *current;
	int Bcode;
	int Bcode2;
	int Age;

	flightDetails call;

public:
	int members;
	float sum;
	float fare;
	float discount;
	float discountFare;
	float totalFare;
	string cnic;

public:
	bookingProcedureOfTicket() // Constructor
	{
		head = NULL;
		Bcode = rand();
		Bcode2 = 8971 + Bcode;
		sum = 0;
		fare = 0;
		discount = 0;
		discountFare = 0;
		totalFare = 0;
	}

	// This method will contain all the passenger info

	void inputPassengersInfo()
	{
		string currentLocation, destination, date;

		cout << "\nEnter your current location: ";
		cin >> currentLocation;

		cout << "Enter your destination: ";
		cin >> destination;

		if (currentLocation == destination)
		{
			cout << "\nCurrent Location and Destination cannot be same." << endl;
			cout << "\nEnter correct location and destination." << endl;

			cout << "Enter your current location: ";
			cin >> currentLocation;

			cout << "Enter your destination: ";
			cin >> destination;
		}

		// Date Input

		string d, m, y;
		cout << "Enter Date: ";
		cin >> d;
		cout << "Enter Month: ";
		cin >> m;
		cout << "Enter Year: ";
		cin >> y;

		date = d + "/" + m + "/" + y;

		cout << "\nFor how many people you want to book tickets: ";
		cin >> members;

		Bcode2 = Bcode2 + 1;
		cout << endl;

		for (int i = 1; i <= members; i++)
		{
			Node *passenger_newnode = new Node();

			cout << "Enter passenger name: ";
			cin >> passenger_newnode->name;

			cout << "Enter your age: ";
			cin >> passenger_newnode->age;

			passenger_newnode->date = date;

			cout << "Enter gender: ";
			cin >> passenger_newnode->gender;

			// CNIC validation
			cout << "Enter CNIC (without dashes)(13 digits): ";
			cin >> cnic;
			
			if(cnic.length()!=13){
				cout << "Re-Enter CNIC (without dashes)(13 digits): ";
				cin >> cnic;
			}

			cnic = cnic.insert(5, "-");
			cnic = cnic.insert(13, "-");

			passenger_newnode->CNIC = cnic;

			cout << "Your ticket Serial No. is: S-" << i;
			passenger_newnode->ticketSerialNo = i;
			cout << "\n----------------------------------------------------\n"
				 << endl;

			passenger_newnode->currentLocation = currentLocation;
			passenger_newnode->destination = destination;

			// Bcode2 = Bcode2 +1;
			passenger_newnode->bookingCode = Bcode2;

			if (head == NULL)
			{
				head = passenger_newnode;
				passenger_newnode->next = NULL;
			}

			else
			{
				current = head;

				while (current->next != NULL)
				{
					current = current->next;
				}

				current->next = passenger_newnode;
			}
		}

		// Check if user has entered correct destination according to available flights

		if (destination == "Lahore" || destination == "lahore")
		{
			call.lahore();
		}
		else if (destination == "Islamabad" || destination == "islamabad")
		{
			call.islamabad();
		}
		else if (destination == "Karachi" || destination == "karachi")
		{
			call.karachi();
		}
		else if (destination == "Quetta" || destination == "quetta")
		{
			call.quetta();
		}
		else if (destination == "Peshawar" || destination == "peshawar")
		{
			call.peshawar();
		}
		else
			cout << "Wrong destination\n";

		cout << "\nYour booking code is " << Bcode2;

		cout << "\nTo proceed and view total price, Press 2.";
	}

	// To calculate Total Price of tickets

	void calculatePrice()
	{
		current = head;
		bool found = false;
		fare = call.getperPersonPrice();

		int bcode;

		cout << "Enter your booking code: ";
		cin >> bcode;

		if (current == NULL)
			cout << "\nNo price to display";

		while (current != NULL)
		{
			if (bcode == current->bookingCode)
			{
				if (current->age <= 6)
				{
					discount = call.getperPersonPrice() * 0.5; // 50% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else if (current->age > 6 && current->age <= 12)
				{
					discount = call.getperPersonPrice() * 0.3; // 30% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else if (current->age >= 60)
				{
					discount = call.getperPersonPrice() * 0.2; // 20% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else
				{
					fare = call.getperPersonPrice();
					current->fare = fare;
					sum += fare;
				}

				found = true;
			}
			current = current->next;
		}

		totalFare = sum;
		cout << "Total Fare for members " << members << " is: " << totalFare;

		if (found = false)
			cout << "Enter correct booking code" << endl;
	}

	// This will display the information of all the bookings

	void viewInfo()
	{
		cout << endl;

		current = head;
		int bookCode;

		cout << "Enter ticket code: ";
		cin >> bookCode;

		if (current == NULL)
		{
			cout << "There is no booking to display." << endl;
		}

		while (current != NULL)
		{
			if (bookCode == current->bookingCode)
			{
				cout << "_____________________________________________________________________ " << endl
					 << endl;
				cout << "| Serial No.:     \t"
					 << "S-" << current->ticketSerialNo << " \t\t\t|" << endl;
				cout << "| Passenger Name: \t" << current->name << " \t\t\t|" << endl;
				cout << "| Age:            \t" << current->age << " \t\t\t|" << endl;
				cout << "| CNIC:           \t" << current->CNIC << " \t|" << endl;
				cout << "| Booking Date:   \t" << current->date << " \t\t|" << endl;
				cout << "| From:           \t" << current->currentLocation << " \t\t|" << endl;
				cout << "| To:             \t" << current->destination << " \t\t|" << endl;
				cout << "| Fare:           \t" << current->fare << " \t\t\t|" << endl;
				cout << "_____________________________________________________________________ " << endl;
				cout << endl;
			}
			current = current->next;
		}
	}

	// Modify any user Ticket incase of incorrect information

	void modifyTicket()
	{
		int serial;
		int found = -1;
		cout << "\nEnter the serial number to modify ticket: S-";
		cin >> serial;

		current = head;
		while (current != NULL)
		{
			if (serial == current->ticketSerialNo)
			{
				cout << "Enter passenger name: ";
				cin >> current->name;

				cout << "Enter your age: ";
				cin >> current->age;

				cout << "Enter date: ";
				cin >> current->date;

				cout << "Enter gender: ";
				cin >> current->gender;

				found = 0;
				cout << endl;
				break;
			}
			current = current->next;
		}

		if (found == -1)
		{
			cout << "Record not Found" << endl;
		}
	}

	// Method to confirm payment after booking

	void confirmPayment()
	{
		current = head;

		int bcode, userInput;
		string cnic;
		bool found = false;

		cout << "Enter your booking code: ";
		cin >> bcode;

		cout << "\nEnter CNIC number of booking of 1st person(with dashes): ";
		cin >> cnic;

		if (current == NULL)
		{
			cout << "\nThere is no booking aganist entered booking code" << endl;
		}

		while (current != NULL)
		{
			if (bcode == current->bookingCode && cnic == current->CNIC)
			{
				found = true;
				break;
			}
			current = current->next;
		}

		if (found)
		{

			cout << "\nYour Total Fare is: " << totalFare << endl;

			cout << "\nPay fare amount to confirm ticket: ";
			cin >> userInput;

			if (userInput == totalFare)
			{
				cout << "\nYour booking is confirmed, enjoy your trip!!!";
			}
			else
			{
				cout << "\nPlease pay the required amount" << endl;

				cout << "\nPay fare amount to confirm ticket: ";
				cin >> userInput;

				if (userInput == totalFare)
				{
					cout << "\nYour booking is confirmed, enjoy your trip!!!";
				}

				else
				{
					cout << "\nYour Booking is cancelled, book again." << endl;
				}
			}
		}
		else
		{
			cout << "\nBookings not found, book your ticket first" << endl;
		}
	}

	// To clear all passenger data from the system

	void DeletingPassengerInfo()
	{
		current = head;
		int Bcode;
		char decide;

		cout << "Enter your booking code to cancel booking: ";
		cin >> Bcode;

		if (head == NULL)
		{
			cout << "No booking to cancel" << endl;
		}
		else
		{
			while (current != NULL)
			{
				if (Bcode == current->bookingCode)
				{
					delete (current); // deleting user data(Node)
				}

				current = current->next;
			}

			cout << "\nBooking is cancelled, successfully" << endl;
			cout << "Press N to exit: ";
			cin >> decide;

			if (decide == 'N' || decide == 'n')
			{
				exit(0);
			}

			else
				exit(0);
		}
	}
};

//-------------------------------------------------------------------------------------------------------------

// Menu which will select our desirable query

class Menu
{
	int choice;
	bookingProcedureOfTicket call;

public:
	void showMenu()
	{
		cout << "\n----------------------------------";
		cout << "\n";
		cout << "  Pakistan International Airline ";
		cout << "\n";
		cout << "----------------------------------";

		cout << "\n    Book PIA Flight Tickets \n"
			 << endl;
		call.inputPassengersInfo();

		do
		{

			cout << endl;
			cout << "\n----------------------------------";
			cout << "\n";
			cout << "  Pakistan International Airline ";
			cout << "\n";
			cout << "----------------------------------";

			cout << "\n 2 Price";
			cout << "\n 3 View Ticket details";
			cout << "\n 4 Modify Ticket details";
			cout << "\n 5 Payment confirmation ";
			cout << "\n 6 Cancel your booking";
			cout << "\n 0 Exit \n";
			cout << "\nEnter your Choice:  ";
			cin >> choice;

			switch (choice)
			{
			case 2:
				cout << endl;
				call.calculatePrice();
				break;
			case 3:
				cout << endl;
				call.viewInfo();
				break;
			case 4:
				cout << endl;
				call.modifyTicket();
				break;
			case 5:
				cout << endl;
				call.confirmPayment();
				break;
			case 6:
				cout << endl;
				call.DeletingPassengerInfo();
				break;
			}

		} while (choice != 0);
	}
};


//-------------------------------------------------------------------------------------

// Main Method

int main()
{
	Menu call; // Menu Object

	call.showMenu(); // Called method

	return 0;
}

//I am going through a wonderful journey being a part of GDSC at DHA Suffa University and am further interested to experience Google-led talks, workshops, and deep knowledge on  Google technologies. Being an ambassador, I would be able to serve my skills for Women Techmarks in creating a healthy work environment, and side by side, it will give me the opportunity to learn from Google-led talks, workshops, deep knowledge on Google technologies.