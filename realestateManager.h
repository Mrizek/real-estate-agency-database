// Name : Mohamed Mrizek Id : 40234343
#pragma once
#include <iostream>
#include "Date.h"
#include "House.h"
#include "realestateAgent.h"
using namespace std;
class realestateManager
{
private:
	House* houselisting_array; // this array stores the houses listed for sale.
	realestateAgent* agent_array; // this array stores the real estate agents employed
	House* housesold_array; // this array stores the houses that have been sold
	int no_of_house; // number of houses on sale
	int no_of_soldhouses; // number of sold houses
	int no_of_agents; // number of agents employed by the agency
public:
	realestateManager();// default constructor
	int getno_of_house();// return the number of houses on sale
	int getno_of_soldhouses(); // return the number of sold houses
	int getno_of_agents(); // return the number of agents employed by the agency 
	void setno_of_house(int no_of_house); // set the number of houses on sale
	void setno_of_soldhouses(int no_of_soldhouses);// set the number of sold houses
	void setno_of_agents(int no_of_agents);// set the number of agents employed by the agency 
	bool inserthouse(House); // add a new house for sale to the houselisting_array
	bool soldHouse(int house_id, int sale_price, Date sale_date); // When a house is sold the object of that house is updated to include the sale price and sale date of the house. Then, it is removed from the houselisting_array and stored in the housesold_array.
	bool insertAgent(realestateAgent); // Add a new real estate agent to the agent_array,
	bool printHouse(int house_id); // Print data on a house with the given identification number
	void printAllHouse(int asking_price_min); // Print the house data on all houses above certain asking price
	void printHouse(string city_name); //Print the data on all the houses for sale in the same city
	void printHouse(realestateAgent agent); // Print the data on all houses listed by a given real estate agent for sale
	void printSoldHouse(realestateAgent agent); // Print the data on all the houses sold by a given real estate agent
	void printAgents(); // Print the data on all the real estate agents
	void printInfo();// prints the values of the data members
	~realestateManager(); //destructor
};
