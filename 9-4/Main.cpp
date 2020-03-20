#include<iostream>
#include<iomanip>
#include"BMI.h"
using namespace std;

int main() {

	string name;
	double weight, height;

	//輸入名字、體重、身高
	cin >> name >> weight >> height;
	//使用函數(string, double, double)
	BMI BMI(name,weight,height);

	//從函數取得名字及BMI
	cout << fixed <<setprecision(2) << BMI.getName() << " " << BMI.getBMI();

	system("pause");
	return 0;
}

/*
也可寫成

BMI BMI_name(name)
BMI BMI(weight, height)

這時你的函數就得設成兩種才行！

BMI(string newName);
BMI(double newWeight, double newHeight)

*/