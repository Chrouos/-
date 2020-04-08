#include"Student.h"

Student::Student() {
	name = "Avrill";
	birthDay.setMonth(1);
	birthDay.setDay(1);
	birthDay.setYear(2000);
	score = 100;
}
Student::Student(string newName, Date newBirthDay, int newScore) {
	setName(newName);
	setScore(newScore);
	birthDay = newBirthDay;
}

void Student::setName(string newName) {
	name = newName;
}
string Student::getName() const {
	return name;
}

void Student::setDate(int mon, int day, int year) {
	birthDay.setMonth(mon);
	birthDay.setDay(day);
	birthDay.setYear(year);
}
Date Student::getDate() const {
	return birthDay;
}

void Student::setScore(int newScore) {
	score = newScore;
}
int Student::getScore() const {
	return score;
}

void Student::print() {
	cout << name << " ";
	birthDay.print();
	cout << " " << score << endl;
}
