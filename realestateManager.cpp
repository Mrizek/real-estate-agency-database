// Name : Mohamed Mrizek Id : 40234343
#include "realestateManager.h"
#include <iostream>
#include "Date.h"
#include "House.h"
#include "realestateAgent.h"
using namespace std;
// default constructor
realestateManager::realestateManager() {
	houselisting_array = new House[200]; // the maximum number of houses to be sold is 200
	agent_array = new realestateAgent[20]; // the maximum number of Agents is 20
	housesold_array = new House[500]; // the maximum number of houses sold is 500
	no_of_house = 0;
	no_of_soldhouses = 0;
	no_of_agents = 0;
}
// return the number of houses on sale
int realestateManager::getno_of_house(){
	return no_of_house;
}
// return the number of sold houses
int realestateManager::getno_of_soldhouses(){
	return no_of_soldhouses;
}
// return the number of agents employed by the agency
int realestateManager::getno_of_agents(){
	return no_of_agents;
}
// set the number of houses on sale
void realestateManager::setno_of_house(int no_of_house) {
	this->no_of_house = no_of_house;
}
// set the number of sold houses
void realestateManager::setno_of_soldhouses(int no_of_soldhouses){
	this->no_of_soldhouses = no_of_soldhouses;
}
// set the number of agents employed by the agency 
void realestateManager::setno_of_agents(int no_of_agents){
	this->no_of_agents = no_of_agents;
}
// add a new house for sale to the houselisting_array
bool realestateManager::inserthouse(House new_house) {
	if (no_of_house < 200) // check if the maximum number of houses to be sold is reached
	{
		houselisting_array[no_of_house] = new_house; // the house is added
		no_of_house++; // the number of houses is incremented
		return 1;
	}
	else
	{
		return 0;
	}
}
// When a house is sold the object of that house is updated to include the sale price and sale date of the house. Then, it is removed from the houselisting_array and stored in the housesold_array.
bool realestateManager::soldHouse(int house_id, int sale_price, Date sale_date) {
	if (no_of_soldhouses < 500) //check if the maximum number of houses sold is reached
	{
		for (int i = 0; i < no_of_house; i++)
		{
			if (houselisting_array[i].gethouse_id() == house_id) { // find the house to be sold
				houselisting_array[i].setsale_price(sale_price);//set the price
				houselisting_array[i].setsale_date(sale_date);//set the date
				housesold_array[no_of_soldhouses++] = houselisting_array[i]; //add the house to the array of sold houses
				for (int j = i; j < no_of_house-1; j++)
				{
					houselisting_array[j] = houselisting_array[j + 1]; // shift the houses so the house getting sold is destroyed from the houses on sale
				}
				no_of_house--;// decrement the number of houses on sale
				return 1;

			}
		}
	}
	else
	{
		return 0;
	}

}
// Add a new real estate agent to the agent_array,
bool realestateManager::insertAgent(realestateAgent new_agent) {
	if (no_of_agents < 20)
	{
		agent_array[no_of_agents] = new_agent; // the agent is added to agent's array
		no_of_agents++; // increment the number of agents
		return 1;
	}
	else
	{
		return 0;
	}
}
// Print data on a house with the given identification number
bool realestateManager::printHouse(int house_id) {
	for (int i = 0; i < no_of_house; i++)
	{
		if (houselisting_array[i].gethouse_id() == house_id) // search for the house by its id in the houses on sale
		{
			houselisting_array[i].print_House(); // print its attributes if found
			return 1;
		}
	}
	for (int i = 0; i < no_of_soldhouses; i++)
	{
		if (housesold_array[i].gethouse_id() == house_id)// search for the house by its id in the sold houses 
		{
			housesold_array[i].print_House();// print its attributes if found
			return 1;
		}
	}
	cout << "House not Found! "<<endl;
	return 0;

}
// Print the house data on all houses above certain asking price
void realestateManager::printAllHouse(int asking_price_min) {
	bool found = false;
	for (int i = 0; i < no_of_house; i++) {
		if (houselisting_array[i].getasking_price()> asking_price_min) // check for each house on sale if its price is above the minimum defined by the user
		{
			houselisting_array[i].print_House(); // print the info of the house if found
			found = true;
		}
	}
	for (int i = 0; i < no_of_soldhouses; i++) {
		if (housesold_array[i].getasking_price() > asking_price_min) // check for each house sold if its price is above the minimum defined by the user
		{
			housesold_array[i].print_House();// print the info of the house if found
			found = true;
		}
	}
	if (found == false)
	{
		cout << " No houses above the asking price " << endl;
	}

}
//Print the data on all the houses for sale in the same city
void realestateManager::printHouse(string city_name){
	bool found = false;
	for (int i = 0; i < no_of_house; i++) {
		if (houselisting_array[i].getcity_name()== city_name) // check for each house on sale if its city name is the same as the one provided by the user
		{
			houselisting_array[i].print_House(); // print the info of the house if found
			found = true;
		}
	}
	if (found == false)
	{
		cout << "House not Found! " << endl;
	}
}
// Print the data on all houses listed by a given real estate agent for sale
void realestateManager::printHouse(realestateAgent agent) {
	bool found = false;
	for (int i = 0; i < no_of_house; i++) {
		if (houselisting_array[i].getagent_id() == agent.getemployee_id()) // check for each house on sale if the agent id is the same as the one given by the user
		{
			houselisting_array[i].print_House();// print the info of the house if found
			found = true;
		}
	}
	if (found == false)
	{
		cout << "House not Found! " << endl;
	}
}
// Print the data on all the houses sold by a given real estate agent
void realestateManager::printSoldHouse(realestateAgent agent) {
	bool found = false;
	for (int i = 0; i < no_of_soldhouses; i++) {
		if (housesold_array[i].getagent_id() == agent.getemployee_id())// check for each house sold if the agent id is the same as the one given by the user
		{
			housesold_array[i].print_House(); // print the info of the house if found
			found = true;
			
		}
	}
	if (found == false)
	{
		cout << "House not Found! " << endl;
	}
}
// Print the data on all the real estate agents
void realestateManager::printAgents() {
	for (int i = 0; i < no_of_agents; i++)
	{
		agent_array[i].print_agent(); // a for loop to print every agent in the array agent_array
	}
}
// prints the values of the data members
void realestateManager::printInfo() {
	cout << "Printing the elements in the houselisting array: " << endl;
	for (size_t i = 0; i < no_of_house; i++)
	{
		houselisting_array[i].print_House(); // a for loop to print each house in the array houselising_array
	}
	cout << "Printing the elements in the agent array: " << endl;
	for (size_t i = 0; i < no_of_agents; i++)
	{
		agent_array[i].print_agent();// a for loop to print every agent in the array agent_array
	}
	cout << "Printing the elements in the housesold array: " << endl;
	for (size_t i = 0; i < no_of_soldhouses; i++)
	{
		housesold_array[i].print_House();// a for loop to print each house in the array housesold_array
	}
	cout << "number of houses available for sale: " << no_of_house << endl;
	cout << "number of houses sold: " << no_of_soldhouses << endl;
	cout << "number of agents: " << no_of_agents << endl;
}
//destructor
realestateManager::~realestateManager() {
	// destroy the created pointers
	delete[]houselisting_array;
	delete[]housesold_array;
	delete[]agent_array;
}