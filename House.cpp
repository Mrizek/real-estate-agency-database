// Name : Mohamed Mrizek Id : 40234343
#include "House.h"
#include <iostream>
#include "Date.h"
using namespace std;
// default constructor
House::House() {
	house_id = 0;
	owner_name = "";
	street_address = "";
	city_name = "";
	no_of_rooms = 0;
	asking_price = 0;
	sale_price = 0;
	agent_id = 0;
}
// regular constructor
House::House(static int house_id, string owner_name, string street_address, string city_name, int no_of_rooms, int asking_price, Date listing_date, int agent_id) {
	this->house_id = house_id;
	this->owner_name = owner_name;
	this->street_address = street_address;
	this->city_name = city_name;
	this->no_of_rooms = no_of_rooms;
	this->asking_price = asking_price;
	this->sale_price = 0;
	this->listing_date = listing_date;
	this->agent_id = agent_id;

}
// return the id of the house
int House::gethouse_id() const {
	return house_id;
}
// return the name of the owner
string House::getowner_name() const {
	return owner_name;
}
// return the street address of the house
string House::getstreet_address() const {
	return street_address;
}
// return the name of the city in which the house is sold
string House::getcity_name() const {
	return city_name;
}
// return the number of rooms in the house
int House::getno_of_rooms() const {
	return no_of_rooms;
}
// return the asking price of the house
int House::getasking_price()const {
	return asking_price;
}
// return the sold price of the house
int House::getsale_price() const {
	return sale_price;
}
// return the date that house was listed for sale
Date House::getlisting_date() const {
	return listing_date;
}
// return the date that house was sold
Date House::getsale_date() const {
	return sale_date;
}
// return the employee id of the agent assigned to this house
int House::getagent_id() const {
	return agent_id;
}
// sets the value of house_id
void House::sethouseid(int house_id) {
	this->house_id = house_id;
}
// sets the value of owner_name
void House::setowner_name(string owner_name) {
	this->owner_name = owner_name;
}
// sets the value of the street_address
void House::setstreet_address(string street_address) {
	this->street_address = street_address;
}
// sets the name of the city
void House::setcity_name(string city_name) {
	this->city_name = city_name;
}
// sets the number of rooms of the house
void House::setno_of_rooms(int no_of_rooms) {
	this->no_of_rooms = no_of_rooms;
}
//sets the asking price of the house
void House::setasking_price(int asking_price) {
	this->asking_price = asking_price;
}
// sets the value of sale_price
void House::setsale_price(int sale_price) {
	this->sale_price = sale_price;
}
// sets the value of listing_date
void House::setlisting_date(Date listing_date) {
	this->listing_date = listing_date;
}
// sets the value of sale_date
void House::setsale_date(Date sale_date) {
	this->sale_date = sale_date;
}
// sets the value of agent_id
void House::setagent_id(int agent_id) {
	this->agent_id = agent_id;
}
// prints the values of the data members
void House::print_House() {
	cout << "house_id: " << house_id << endl;
	cout << "owner's name: " << owner_name << endl;
	cout << "street adress: " << street_address << endl;
	cout << "city's name: " << city_name << endl;
	cout << "number of rooms: " << no_of_rooms << endl;
	cout << "asking price: " << asking_price << endl;
	cout << "sale price: " << sale_price << endl;
	cout << "listing's date: ";
	listing_date.printDate();// calls the print function of the class Date
	cout << "sale's date: ";
	sale_date.printDate();// calls the print function of the class Date
	cout << "agent's id: " << agent_id << endl;
	cout << "---------------------------------" << endl;
}