#include"Rectangle .h"

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
	return hight;
}

double Rectangle::getArea();

void Rectangle::swapByReference(Rectangle& r2);
void Rectangle::swapByPointer(Rectangle* r2);