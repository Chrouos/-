#include<iostream>
#include"Rectangle.h"
using namespace std;

int main() {

	double height, width;

	//存入三組 (長、寬)
	Rectangle rectangleArray[3];
	for (int i = 0; i < 3; i++) {
		cin >> height >> width;
		rectangleArray[i].setHeight(height);
		rectangleArray[i].setWidth(width);
	}
	for (int i = 0; i < 3; i++) {
		cout << rectangleArray[i].getHeight() << " " << rectangleArray[i].getWidth() << " " << rectangleArray[i].getArea() << endl;
	}
	cout << rectangleArray[3].getNumOfRect() << " " << "Rectangles";
}