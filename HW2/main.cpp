#include"StuCard.h"
#include<iostream>
double* classAver(StuCard[], int);

int main() {

	StuCard stuArray[5];

	//先輸入四個人
	double ScoreArray0[3] = { 80.0, 70.0, 90.0 };
	StuCard temp0("Jerry", 1, ScoreArray0, Date(3, 20, 1997));
	stuArray[0] = temp0;

	double ScoreArray1[3] = { 85.0, 77.0, 95.0 };
	StuCard temp1("John", 1, ScoreArray1, Date(5, 20, 1995));
	stuArray[1] = temp1;

	double ScoreArray2[3] = { 83.0, 75.0, 70.0 };
	StuCard temp2("Mary", 0, ScoreArray2, Date(2, 18, 2007));
	stuArray[2] = temp2;

	double ScoreArray3[3] = { 73.0, 95.0, 67.0 };
	StuCard temp3("Tom", 1, ScoreArray3, Date(11, 8, 2003));
	stuArray[3] = temp3;

	//輸入名字，性別，成績[3]，月日年
	string name;
	int sex, mon, day, year;
	double scoreArray[3];

	cin >> name >> sex >> scoreArray[0] >> scoreArray[1] >> scoreArray[2] >> mon >> day >> year;
	StuCard temp(name, sex, scoreArray, Date(mon, day, year));
	stuArray[4] = temp;

	//輸出五次
	for (int i = 0; i < 5; i++) {
		stuArray[i].printCard();
	}
	double *p = classAver(stuArray, 0);
	//cout << "Average: " << *classAver(stuArray, 0) << ", " << *classAver(stuArray, 1) << ", " << *classAver(stuArray, 2);
	cout << "Average: " << *(p + 0) << ", " << *(p + 1) << ", " << *(p + 2);

	system("pause");
	return 0;
}

double* classAver(StuCard stuArray[], int n) {
	static double average[3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			average[i] += stuArray[j].getScore(i);
		}
		average[i] /= 5;
	}

	return average;
}