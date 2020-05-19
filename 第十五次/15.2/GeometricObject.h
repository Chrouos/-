#ifndef GeometricObject_H
#define GeometricObject_H

#include<string>
#include<iostream>
#include<math.h>
using namespace std;

class GeometricObject
{
public:

	GeometricObject();
	GeometricObject(string color);

	void setColor(string newColor);
	string getColor();

	virtual double getVolume() = 0;
	virtual double getArea() = 0;


private:

	string color;

};

#endif // !GeometricObject_H
