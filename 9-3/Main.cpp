#include<iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;

int main() {

	//輸入分別兩個長、寬
	double w1, w2, h1, h2;
	cin >> w1 >> h1 >> w2 >> h2;

	Rectangle R1(w1, h1);
	Rectangle R2(w2, h2);

	//分別取得兩個面積、周長
	cout << fixed << setprecision(2) << R1.getArea() << " " << R1.getPerimeter() <<endl ;
	cout << fixed << setprecision(2) << R2.getArea() << " " << R2.getPerimeter() << endl ;

	//設定，SET使用
	R2.setHeight(5.0);
	R2.setWidth(2.5);
	cout << fixed << setprecision(2) << R2.getArea() << " " << R2.getPerimeter() << endl;

	system("pause");
	return 0;

}