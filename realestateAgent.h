#pragma once
// Name : Mohamed Mrizek Id : 40234343
#include <iostream>
#include "Date.h"
using namespace std;
class realestateAgent // the class related to realestateAgent
{
private:
	int employee_id; // the id of the employee
	string agent_name;// the name of the agent
	Date employment_date;// employment starting date of the agent.
public:
	realestateAgent(); // default constructor
	realestateAgent(int employee_id, string agent_name, Date employment_date); // regular constructor that initializes attributes of realestateAgent with user input
	int getemployee_id() const; // return the employee id
	string getagent_name() const; // return the agent name
	Date getemployment_date() const; // return the employment starting date of the agent
	void setemployee_id(int employee_id); // sets the employee id
	void setagent_name(string agent_name); // sets the agent name
	void setemployment_date(Date employment_date); // sets the employment starting date of the agent
	void print_agent();// prints the values of the data members
};

