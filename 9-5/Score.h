#ifndef Score_H
#define Score_H
#include<string>
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

private:

	string name;
	int math;

};
#endif // !Score

