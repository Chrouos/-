#include"Rectangle.h"

//建構子初值設定
Rectangle::Rectangle() {
	width = 1;
	height = 1;
}
//引入(double,double) 的建構子
Rectangle::Rectangle(double newWidth, double newHeight) {
	setWidth(newWidth);
	setHeight(newHeight);
}

double Rectangle::getWidth() {
	return width;
}
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}

double Rectangle::getHeight() {
	return height;
}
void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}

double Rectangle::getArea() {
	return height * width;
}