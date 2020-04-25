#include"Rectangle.h"
#include<iostream>
using namespace std;

double sum(Rectangle rectArray[], int size) {
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += rectArray[i].getArea();
	}
	return total;
	
}

int main() {

	const int SIZE = 5;
	Rectangle rectArray[SIZE];
	double width, height;

	for (int i = 0; i < SIZE; i++) {
		cin >> width >> height;
		rectArray[i].setWidth(width);
		rectArray[i].setHeight(height);
		cout << rectArray[i].getArea() << " ";
	}

	cout << endl << "Total: " << rectArray[SIZE].getNumOfRect() << " rectangles" << endl;
	cout << "Area: " << sum(rectArray, SIZE);

	system("pause");
	return 0;

}