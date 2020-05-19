#include<iostream>
#include<vector>
#include"Rectangle.h"
using namespace std;

int main() {
	
	double w1, w2, d1, d2;
	cin >> w1 >> d1 >> w2 >> d2;

	Rectangle r1(w1, d1);
	Rectangle r2(w2, d2);

	cout << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByReference(r2);
	cout << r1.getArea() << " " << r2.getArea() << endl;

	cout << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByPointer(&r2);
	cout << r1.getArea() << " " << r2.getArea();


	system("pause");
	return 0;
}