#include"Score.h"

//設定初值，調皮一下
Score::Score() {
	math = 100;
	name = "DiuDiu";
}
Score::Score(string newName, int newMath) {
	setName(newName);
	setMath(newMath);
}

string Score::getName() {
	return name;
}
void Score::setName(string newName) {
	name = newName;
}

int Score::getMath() {
	return math;
}
void Score::setMath(int newMath) {
	math = newMath;
}