#ifndef Rational_H
#define Rational_H

#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;

class Rational
{
public:

	Rational();
	Rational(int numerator, int denominator);

	//取得分子、分母
	int getNumerator() const;
	int getDenominator() const;

	//計算 最大公因數 GCD
	int gcd(int n, int d);

	//加減乘除
	Rational add(const Rational& secondRational) const;
	Rational subtract(const Rational& secondRational) const;
	Rational multiply(const Rational& secondRational) const;
	Rational divide(const Rational& secondRational) const;

	// 運算子 + - * /
	Rational operator+(const Rational& r2) const;
	Rational operator-(const Rational& r2) const;
	Rational operator*(const Rational& r2) const;
	Rational operator/(const Rational& r2) const;

	//比對大小
	int compareTo(const Rational& r2) const;

	// <, <=, >=, ==, !=
	bool operator<(const Rational& r2) const;
	bool operator<=(const Rational& r2) const;
	bool operator>=(const Rational& r2) const;
	bool operator==(const Rational& r2)const;
	bool operator!=(const Rational& r2) const;

	// cout, cin
	friend ostream& operator<<(ostream &out, Rational& r);
	friend istream& operator>>(istream& in, Rational& r);
		
	//[]
	int& operator[](int num);

	// +=, -=, *=, /=
	Rational operator+=(const Rational& r2);
	Rational operator-=(const Rational& r2);
	Rational operator*=(const Rational& r2);
	Rational operator/=(const Rational& r2);

	// 前++ -- 後++ --
	Rational operator++(int dummy);
	Rational operator--(int dummy);

	Rational& operator++();
	Rational& operator--();

	//正負號
	Rational operator+();
	Rational operator-();

	void compareToVoid(const Rational& r2);
	string toString() const;

	bool equals(const Rational& secondRational) const;
	int intValue() const;
	double doubleValue() const;

	//COPY
	Rational& operator=(const Rational& r2) ;

private:

	int numerator;
	int denominator;

};


#endif // Rational_H
