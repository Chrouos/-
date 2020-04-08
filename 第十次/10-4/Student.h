#ifndef Student_H
#define Student_H

#include<string>
#include<iostream>
#include"Date.h"
using namespace std;

class Student
{
public:

	Student();
	Student(string newName, Date newBirthDay, int newScore);

	void setName(string newName);
	string getName() const;

	void setDate(int mon, int day, int year);
	Date getDate() const;

	void setScore(int newScore);
	int getScore() const;

	void print();

private:

	string name;
	Date birthDay;
	int score;

};

#endif // !Student_H
