#include"Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle() {
	width = 1;
	height = 1;
	numOfRect++;
}
Rectangle::Rectangle(double newWidth, double newHeight) {
	setWidth(newWidth);
	setHeight(newHeight);
	//numOfRect++;
}

void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}
double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}
double Rectangle::getHeight() const {
	return height;
}

double Rectangle::getArea() const {
	return width * height;
}
int Rectangle::getNumOfRect() {
	return numOfRect;
}