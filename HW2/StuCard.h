#ifndef StuCard_H
#define StuCard_H

#include"Date.h"


class StuCard
{
public:

	StuCard();
	StuCard(string name, bool sex, double scoreAry[], Date birthDay);

	void setName(string newName);
	void setSex(bool newSex);
	void setScore(int size, double newScoreAry[]);
	void setDate(Date newDate);

	string getName() const;
	bool getSex() const;
	double getScore(int i) const;
	Date getDate() const;

	//計算三科平均
	double average();

	//計算年紀 今年為2020
	int getAge(int thisYear) const;

	void printCard();



private:

	string name;
	bool sex;
	double scoreAry[3];
	Date birthDay;


};


#endif // !StuCard_H
