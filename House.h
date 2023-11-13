// Name : Mohamed Mrizek Id : 40234343
#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class House
{	
private:
	int house_id; // each house for sale is assigned a unique identification
	string owner_name; // the name of the owner
	string street_address; // the street address of the house
	string city_name; // the name of the city in which the house is sold
	int no_of_rooms; // number of rooms in the house
	int asking_price; // asking price of the house
	int sale_price; // the sold price of the house, initially set to zero.
	Date listing_date; //the date that house was listed for sale.
	Date sale_date;// the date that house was sold, initially set to zero date.
	int agent_id; // employee id of the agent assigned to this house.
public:
	House(); // default constructor
	House(int house_id, string owner_name, string street_address, string city_name, int no_of_rooms, int asking_price, Date listing_date , int agent_id);// regular constructor that initializes attributes of House with user input
	int gethouse_id() const; // return the id of the house
	string getowner_name() const; // return the name of the owner
	string getstreet_address() const; // return the street address of the house
	string getcity_name() const; // return the name of the city in which the house is sold
	int getno_of_rooms() const; // return the number of rooms in the house
	int getasking_price() const; // return the asking price of the house
	int getsale_price() const; // return the sold price of the house
	Date getlisting_date() const; // return the date that house was listed for sale
	Date getsale_date() const; // return the date that house was sold
	int getagent_id() const; // return the employee id of the agent assigned to this house
	void sethouseid(int house_id); // sets the value of house_id
	void setowner_name(string owner_name); // sets the value of owner_name
	void setstreet_address(string street_address); // sets the value of the street_address
	void setcity_name(string city_name); // sets the name of the city
	void setno_of_rooms(int no_of_rooms); // sets the number of rooms of the house
	void setasking_price(int asking_price); //sets the asking price of the house
	void setsale_price(int sale_price);// sets the value of sale_price
	void setlisting_date(Date listing_date); // sets the value of listing_date
	void setsale_date(Date sale_date); // sets the value of sale_date
	void setagent_id(int agent_id); // sets the value of agent_id
	void print_House(); // prints the values of the data members
};

