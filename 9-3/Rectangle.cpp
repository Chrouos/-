#include"Rectangle.h"

Rectangle::Rectangle() {
	width = 1;
	height = 1;
}
Rectangle::Rectangle(double newWidth, double newHeight) {
	setHeight(newHeight);
	setWidth(newWidth);
}

//面積和周長還需要我縮嗎
double Rectangle::getArea() {
	return width * height;
}
double Rectangle::getPerimeter() {
	return width * 2 + height * 2;
}

//取得
double Rectangle::getWidth() {
	return width;
}
//設定
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}

//取得
double Rectangle::getHeight() {
	return height;
}
//設定
void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}