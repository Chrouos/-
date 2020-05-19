#include"Ball.h"
#include"Cube.h"
#include"GeometricObject.h"

#include<iomanip>

int main() {

	double ballRadius, cubeLength;
	string ballColor, cubeColor;

	cin >> ballRadius >> ballColor >> cubeLength >> cubeColor;

	Ball ball(ballRadius, ballColor);
	Cube cube(cubeLength, cubeColor);

	cout << "Ball\n"
		<< fixed << setprecision(1) << "radius:" << ball.getRadius()
		<< ", area:" << ball.getArea() << ", volume:" << ball.getVolume()
		<< ", color:" << ball.getColor() << endl;

	cout << "Cube\n"
		<< fixed << setprecision(1) << "length:" << cube.getLength()
		<< ", area:" << cube.getArea() << ", volume:" << cube.getVolume()
		<< ", color:" << cube.getColor() << endl;
	
	system("pause");
	return 0;

}