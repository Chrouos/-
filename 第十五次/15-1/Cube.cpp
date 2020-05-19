#include"Cube.h"

Cube::Cube() {
	length = 1;
}
Cube::Cube(double length) {
	this->length = length;
}
Cube::Cube(double length, string color) {
	this->length = length;
	setColor(color);
}

void Cube::setLength(double newLength) {
	length = newLength;
}

double Cube::getLength() {
	return length;
}
double Cube::getVolume() {
	return pow(length, 3);
}
double Cube::getArea() {
	return 6 * pow(length, 2);
}