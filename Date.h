#pragma once
// Name : Mohamed Mrizek Id : 40234343
class Date // creating the class date
{
private:
	int month, day, year; // private data members
public:
	Date(); // default constructor that initialises the data members to 0
	Date(int month, int day, int year); // regular constructor to initialise the data members to a specific value
	int getmonth() const;// return the month
	int getday() const; // return the day
	int getyear() const;// return the year
	void setmonth(int month);// sets the month
	void setday(int day);// sets the day
	void setyear(int year);// sets the year
	void printDate();// prints the value of the data members
};

