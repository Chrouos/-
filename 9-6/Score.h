#ifndef Score_H
#define Score_H
#include<string>
#include<iostream> //¬°¤F¿é¥X
using namespace std;

class Score
{
public:
	Score();
	Score(string newName, int newMath);

	string getName();
	void setName(string newName);

	int getMath();
	void setMath(int newMath);

	void print();

private:
	int math;
	string name;
};


#endif // !Score_H

