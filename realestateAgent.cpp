// Name : Mohamed Mrizek Id : 40234343
#include "realestateAgent.h"
#include <iostream>
#include "Date.h"
using namespace std;
// default constructor
realestateAgent::realestateAgent() {
	employee_id = 0;
	agent_name = "";
}
// regular constructor
realestateAgent::realestateAgent(int employee_id, string agent_name, Date employment_date) {
	this->employee_id = employee_id;
	this->agent_name = agent_name;
	this->employment_date = employment_date;
}
// return the id of the employee
int realestateAgent::getemployee_id() const {
	return employee_id;
}
// return the name of the agent
string realestateAgent::getagent_name() const {
	return agent_name;
}
// return the employment starting date of the agent
Date realestateAgent::getemployment_date() const {
	return employment_date;
}
// sets the id of the employee
void realestateAgent::setemployee_id(int employee_id) {
	this->employee_id = employee_id;
}
// sets the name of the agent
void realestateAgent::setagent_name(string agent_name) {
	this->agent_name = agent_name;
}
//sets the employment starting date of the agent
void realestateAgent::setemployment_date(Date employment_date) {
	this->employment_date = employment_date;
}
// prints the values of the data members
void realestateAgent::print_agent() {
	cout << "employee id's: " << employee_id << endl; // access the data member directly
	cout << "agent's name: " << agent_name << endl;  // access the data member directly
	cout << "employment_date: " ;
	employment_date.printDate(); // calls the print function of the class Date
	cout << "---------------------------------" << endl;
}