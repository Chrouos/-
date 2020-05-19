#include"Rectangle.h"

Rectangle::Rectangle(double width, double height) {

	setWidth(width);
	setHeight(height);

}

void Rectangle::setWidth(double newWidth) {
	width = newWidth;
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
	return height * width;
}

void Rectangle::swapByReference(Rectangle& r2) {
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
}
void Rectangle::swapByPointer(Rectangle* r2) {
	Rectangle temp = *this;
	*this = *r2;
	*r2 = temp;
}