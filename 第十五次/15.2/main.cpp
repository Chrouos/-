#include"Ball.h"
#include"Cube.h"
#include"GeometricObject.h"

#include<iomanip>

void display(GeometricObject& G) {

	GeometricObject* pG = &G;
	Ball* pBall = dynamic_cast<Ball*>(&G);
	Cube* pCube = dynamic_cast<Cube*>(&G);

	if (pBall != NULL) {
		cout << "Ball\n"
			<< fixed << setprecision(1) << "radius:" << pBall->getRadius()
			<< ", area:" << G.getArea() << ", volume:" << G.getVolume()
			<< ", color:" << G.getColor() << endl;
	}
	else if (pCube != NULL) {
		cout << "Cube\n"
			<< fixed << setprecision(1) << "length:" << pCube->getLength()
			<< ", area:" << G.getArea() << ", volume:" << G.getVolume()
			<< ", color:" << G.getColor() << endl;
	}

}

int main() {

	double ballRadius, cubeLength;
	string ballColor, cubeColor;

	cin >> ballRadius >> ballColor >> cubeLength >> cubeColor;

	Ball ball(ballRadius, ballColor);
	Cube cube(cubeLength, cubeColor);

	display(ball);
	display(cube);


	
	system("pause");
	return 0;

}