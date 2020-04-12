#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle();
	Rectangle(double newWidth, double newHeight);
	

	void setWidth(double newWidth);
	double getWidth() const;;

	void setHeight(double newHeight);
	double getHeight() const;

	double getArea() const;
	static int getNumOfRect();


private:

	double width;
	double height;
	static int numOfRect;

};


#endif // !Rectangle_H

