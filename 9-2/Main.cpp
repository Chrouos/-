#include<iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;

int main() {

	//輸入長、寬
	double w1, w2, h1, h2;
	cin >> w1 >> h1 >> w2 >> h2;

	Rectangle R1(w1, h1);
	Rectangle R2(w2, h2);

	//輸出面積、周長
	cout << fixed << setprecision(2) << R1.getArea() << " " << R1.getPerimeter() << endl; 
	cout << fixed << setprecision(2) << R2.getArea() << " " << R2.getPerimeter() << endl;

	R2.height = 5.0;
	R2.width = 2.5;
	cout << fixed << setprecision(2) << R2.getArea() << " " << R2.getPerimeter() << endl;

	system("pause");
	return 0;
}