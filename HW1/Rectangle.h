#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle();
	Rectangle(double width, double height);

	void setWidth(double newWidth);
	void setHeight (double newHeight);

	double getWidth() const;
	double getHeight() const;

	double getArea() const;
	double getPerimeter() const;
	static int getNumOfRect();
	


private:
	double width;
	double height;
	static int numOfRect;
};

#endif // !Rectangle_H
