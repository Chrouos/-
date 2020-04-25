#include"StuCard.h"

StuCard::StuCard() {
	name = "DiuDiu";
	sex = 1;
	birthDay = Date(1, 1, 2000);
}
StuCard::StuCard(string name, bool sex, double scoreAry[], Date birthDay) {
	int size = 3;
	setName(name);
	setSex(sex);
	setScore(size, scoreAry);
	setDate(birthDay);
}

void StuCard::setName(string newName) {
	name = newName;
}
void StuCard::setSex(bool newSex) {
	sex = newSex;
}
void StuCard::setScore(int size, double newScoreAry[]) {
	for (int i = 0; i < size; i++) {
		scoreAry[i] = newScoreAry[i];
	}
}
void StuCard::setDate(Date newDate) {
	birthDay = newDate;
}

string StuCard::getName() const {
	return name;
}
bool StuCard::getSex() const {
	return sex;
}
double StuCard::getScore(int i) const {
	return scoreAry[i];
}
Date StuCard::getDate() const {
	return birthDay;
}

//計算三科平均
double StuCard::average() {
	double average = 0;
	for (int i = 0; i < 3; i++) {
		average += scoreAry[i];
	}
	return average / 3.0;
}

//計算年紀 今年為2020
int StuCard::getAge(int thisYear) const {
	return thisYear - birthDay.getYear();
}

void StuCard::printCard() {
	cout << name << ", " << sex << ", " << fixed << setprecision(1) << scoreAry[0] << ", " << scoreAry[1] << ", " << scoreAry[2] << ", ";
	//birthDay.print();
	cout << birthDay.getMonth() << "/" << birthDay.getDay() << "/" << birthDay.getYear();
	cout << ", " << average() << ", " << getAge(2020) << endl;
}