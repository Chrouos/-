#include<iostream>
#include"Score.h"
using namespace std;

int main() {

	int math;
	string name;

	//輸入名字及分數
	cin >> name >> math;

	//題目要求
	Score score1("John", 90);
	Score score2("Mary", 80);

	//將題目設定為輸入的名字及分數
	score1.setName(name);
	score2.setMath(math);

	//個別輸出
	score1.print();
	score2.print();

}