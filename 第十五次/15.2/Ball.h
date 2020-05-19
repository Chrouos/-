#ifndef Ball_H
#define Ball_H

#include"GeometricObject.h"

class Ball :public GeometricObject
{
public:

	Ball();
	Ball(double radius);
	Ball(double radius, string color);

	void setRadius(double newRadius);
	double getRadius();
	double getVolume();
	double getArea();

private:

	double radius;

};


#endif // !Ball_H
