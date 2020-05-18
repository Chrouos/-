#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:

	Rectangle(double width, double height);

	void setWidth(double newWidht);
	double getWidth();
		
	void setHeight(double newHeight);
	double getHeight();

	double getArea();

	void swapByReference(Rectangle& r2);
	void swapByPointer(Rectangle* r2);
	

private:

	double width;
	double height;

};


#endif // !Rectangle_H
