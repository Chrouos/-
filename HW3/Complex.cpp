#include"Complex.h"

Complex::Complex() {
	a = 1;
	b = 1;
}
Complex::Complex(int a, int b) {
	this->a = a;
	this->b = b;
}

Complex Complex::add(const Complex& comp2)const {
	int first = a + comp2.a;
	int second = b + comp2.b;
	return Complex(first, second);
}
Complex Complex::subtract(const Complex& comp2)const {
	int first = a - comp2.a;
	int second = b - comp2.b;
	return Complex(first, second);
}
Complex Complex::multiply(const Complex& comp2)const {
	int first = a * comp2.a + b * comp2.b * -1;
	int second = a * comp2.b + b * comp2.a;
	return Complex(first, second);
}

string Complex::toString() {
	stringstream ss;
	if (b >= 0)
		ss << "(" << a << "+" << b << "i)";
	else 
		ss << "(" << a << b << "i)";
	return ss.str();
}

Complex Complex::operator+(const Complex& comp2) const {
	return add(comp2);
}
Complex Complex::operator-(const Complex& comp2) const {
	return subtract(comp2);
}
Complex Complex::operator*(const Complex& comp2) const {
	return multiply(comp2);
}

ostream& operator<< (ostream& out, const Complex comp){
	if (comp.b >= 0)
		out  << comp.a << "+" << comp.b << "i";
	else
		out << comp.a << comp.b << "i";
	return out;
}
istream& operator>> (istream& in, Complex comp) {
	in >> comp.a >> comp.b;
	return in;
}

int Complex::operator[](int index) {
	if (index = 0)
		return a;
	else
		return b;
}

Complex& Complex::operator+=(const Complex& comp2) {
	a += comp2.a;
	b += comp2.b;
	return *this;
}
Complex& Complex::operator-=(const Complex& comp2) {
	a -= comp2.a;
	b -= comp2.b;
	return *this;
}
Complex& Complex::operator*=(const Complex& comp2) {
	a = a * comp2.a + b * comp2.b * -1;
	b = a * comp2.b + b * comp2.a;
	return *this;
}

Complex& Complex::operator++() {
	a = a + 1;
	return *this;
}
Complex& Complex::operator--() {
	a = a - 1;
	return *this;
}

Complex Complex::operator++(int dummy) {
	Complex temp = *this;
	a = a + 1;
	return temp;
}
Complex Complex::operator--(int dummy) {
	Complex temp = *this;
	a = a - 1;
	return temp;
}


Complex Complex::operator+() {
	return Complex(a, b);
}
Complex Complex::operator-() {
	return Complex(-a, -b);
}