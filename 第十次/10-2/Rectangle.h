#ifndef Rectangle_H
#define Rectangle_H
#include<iostream>
using namespace std;

class Rectangle
{
public:

	//建構子
	Rectangle();
	Rectangle(double newWidth, double newHeight); 

	//set為設定 , get為取得
	double getWidth(); 
	void setWidth(double newWidth); 

	double getHeight(); 
	void setHeight(double newHeight); 

	//取得面積
	double getArea(); 

private:

	double width;
	double height;

};

#endif // !Rectangle_H
