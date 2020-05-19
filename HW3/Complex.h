#ifndef Complex_H
#define Complex_H

#include<string>
#include<iostream>
#include<sstream>
using namespace std;

class Complex
{
public:

	Complex();
	Complex(int a, int b);

	Complex add(const Complex& comp2)const;
	Complex subtract(const Complex& comp2)const;
	Complex multiply(const Complex& comp2)const;
	
	string toString();

	Complex operator+(const Complex& comp2) const;
	Complex operator-(const Complex& comp2) const;
	Complex operator*(const Complex& comp2) const;

	friend ostream& operator<< (ostream& out, const Complex comp);
	friend istream& operator>> (istream& in, Complex comp);

	int operator[](int index);

	Complex& operator+=(const Complex& comp2);
	Complex& operator-=(const Complex& comp2);
	Complex& operator*=(const Complex& comp2);

	Complex& operator++();
	Complex& operator--();

	Complex operator++(int dummy);
	Complex operator--(int dummy);

	Complex operator+();
	Complex operator-();

private:

	int a, b;

};

#endif // !Complex_H
