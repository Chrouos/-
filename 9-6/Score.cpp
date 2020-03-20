#include"Score.h"

//調皮一下，設定初值
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

//輸出函數
void Score::print() {
	cout << name << " " << math << endl;
}
