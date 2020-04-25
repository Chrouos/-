#ifndef Date_H
#define Date_H

#include<string>
#include<iomanip>
#include<iostream>
using namespace std;

class Date
{
public:

	Date();
	Date(int month, int day, int year);

	void setMonth(int newMonth);
	void setDay(int newDay);
	void setYear(int newYear);

	int getMonth() const;
	int getDay() const;
	int getYear() const;

	//	void print();

private:

	int month;
	int day;
	int year;

};

#endif // !Date_H
