#include"Rectangle.h"

Rectangle::Rectangle(double width, double height) {
	setWidth(width);
	setHeight(height);
}

void Rectangle::setWidth(double newWidht) {
	width = newWidht;
}
double Rectangle::getWidth() {
	return width;
}

void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}
double Rectangle::getHeight() {
	return height;
}

double Rectangle::getArea() {
	return width * height;
}

void Rectangle::swapByReference(Rectangle &r2) {
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
}
void Rectangle::swapByPointer(Rectangle* r2) {
	Rectangle temp = *this;
	*this = *r2;
	*r2 = temp;

}