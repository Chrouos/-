#include"Ball.h"

Ball::Ball() {
	radius = 1;
}
Ball::Ball(double radius) {
	this->radius = radius;
}
Ball::Ball(double radius, string color) {
	this->radius = radius;
	setColor(color);
}

void Ball::setRadius(double newRadius) {
	radius = newRadius;
}
double Ball::getRadius() {
	return radius;
}
double Ball::getVolume() {
	return 4 * 3.14159 * pow(radius, 3) / 3;
}
double Ball::getArea() {
	return 4 * 3.14159 * pow(radius, 2);
}

