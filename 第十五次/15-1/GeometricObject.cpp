#include"GeometricObject.h"

GeometricObject::GeometricObject() {
	color = "white";
}
GeometricObject::GeometricObject(string color) {
	this->color = color;
}

void GeometricObject::setColor(string newColor) {
	color = newColor;
}
string GeometricObject::getColor() {
	return color;
}