#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:

	double width;
	double height;

	Rectangle();
	Rectangle(double newWidth, double newHeight);

	double getArea();
	double getPerimeter();

};

#endif // Rectangle_H

