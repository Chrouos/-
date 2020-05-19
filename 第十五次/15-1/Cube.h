#ifndef Cube_H
#define Cube_H

#include"GeometricObject.h"

class Cube :public GeometricObject
{
public:

	Cube();
	Cube(double length);
	Cube(double length, string color);

	void setLength(double newLength);

	double getLength();
	double getVolume();
	double getArea();

private:

	double length;

};


#endif // !Cube_H
