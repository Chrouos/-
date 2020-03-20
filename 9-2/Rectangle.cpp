#include"Rectangle.h"


Rectangle::Rectangle() {
	width = 1;
	height = 1;
}
Rectangle::Rectangle(double newWidth, double newHeight) {
	width = newWidth;
	height = newHeight;
}

//獲得面積
double Rectangle::getArea() {
	return width * height;
}

//獲得周長
double Rectangle::getPerimeter() {
	return width * 2 + height * 2;
}
