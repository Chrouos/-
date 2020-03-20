#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle();
	Rectangle(double newWidth, double newHeight);

	double getArea();
	double getPerimeter();

	double getWidth();
	void setWidth(double newWidth);

	double getHeight();
	void setHeight(double newHeight);

private:

	double width;
	double height;

};


#endif // !Rectangle_H

