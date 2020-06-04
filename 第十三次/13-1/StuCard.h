#ifndef StuCard_H
#define StuCard_H

#include<string>
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class StuCard
{
public:

	StuCard();	
	StuCard(string name, bool sex, double scoreAry[3]);
	StuCard(string name, bool sex, double score0, double score1, double score2);

	void setName(string newName);
	void setSex(bool newSex);
	void setScore(int index, double newScore);

	string getName();
	bool getSex();
	double getScore(int index);

	void readFromFile(StuCard StuArray[5]);
	void writeToFile(StuCard StuArray[5]);


private:

	string name;
	bool sex;
	double scoreAry[3];
	

};


#endif // StuCard_H
