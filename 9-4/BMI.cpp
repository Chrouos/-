#include"BMI.h"

BMI::BMI() {
	weight = 48;
	height = 1.6;
	name = "Avrill";
}
BMI::BMI(string newName, double newWidth, double newHeight) {
	weight = newWidth;
	height = newHeight;
	setName(newName);
}

double BMI::getBMI() {
	return weight / (height * height);
}


string BMI::getName() {
	return name;
}
void BMI::setName(string newName) {
	name = newName;
}