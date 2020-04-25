#include"Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle() {
	numOfRect++;
}
Rectangle::Rectangle(double width, double height) {
	setHeight(height);
	setWidth(width);
}

void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}
void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}

double Rectangle::getWidth() const {
	return width;
}
double Rectangle::getHeight() const {
	return height;
}

double Rectangle::getArea() const {
	return height * width;
}
double Rectangle::getPerimeter() const {
	return (width + height) * 2;
}
int Rectangle::getNumOfRect() {
	return numOfRect;
}