#include<iostream>
#include"Score.h"
using namespace std;

int main() {

	string name1, name2;
	int math1, math2;

	////輸入名字及分數
	cin >> name1 >> math1 >> name2 >> math2;

	////題目要求
	Score score1("John", 90);
	Score score2("Mary", 80);

	////將題目設定為輸入的名字及分數
	score1.setName(name1);
	score2.setMath(math2);

	//個別輸出
	cout << score1.getName() << " " << score1.getMath() << endl;
	cout << score2.getName() << " " << score2.getMath() << endl;
}