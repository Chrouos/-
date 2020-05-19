#include"Rational.h"

Rational::Rational() {
	numerator = 0;
	denominator = 1;
}

Rational::Rational(int numerator, int denominator) {
	int factor = gcd(numerator, denominator);
	this->numerator = (denominator > 0 ? 1 : -1) * numerator / factor;
	this->denominator = abs(denominator) / factor;
}

//取得分子、分母
int Rational::getNumerator() const {
	return numerator;
}
int Rational::getDenominator() const {
	return denominator;
}

//計算 最大公因數 GCD
int Rational::gcd(int n, int d) {

	int n1 = abs(n);
	int n2 = abs(d);
	int gcd = 1;

	for (int k = 1; k < n1 && k <= n2; k++) {
		if (n1 % k == 0 && n2 % k == 0) {
			gcd = k;
		}
	}
	return gcd;
}

Rational Rational::add(const Rational& secondRational) const{
	int n = numerator * secondRational.getDenominator() +
		denominator * secondRational.getNumerator();
	int d = denominator * secondRational.getDenominator();
	return Rational(n, d);
}
Rational Rational::subtract(const Rational& secondRational) const{
	int n = numerator * secondRational.getDenominator()
		- denominator * secondRational.getNumerator();
	int d = denominator * secondRational.getDenominator();
	return Rational(n, d);
}
Rational Rational::multiply(const Rational& secondRational) const{
	int n = numerator * secondRational.getNumerator();
	int d = denominator * secondRational.getDenominator();
	return Rational(n, d);
}
Rational Rational::divide(const Rational& secondRational) const {
	int n = numerator * secondRational.getDenominator();
	int d = denominator * secondRational.numerator;
	return Rational(n, d);
}

// 運算子 + - * /
Rational Rational::operator+(const Rational& r2) const {
	return add(r2);
}
Rational Rational::operator-(const Rational& r2) const {
	return subtract(r2);
}
Rational Rational::operator*(const Rational& r2) const {
	return multiply(r2);
}
Rational Rational::operator/(const Rational& r2) const {
	return divide(r2);
}

//比對大小
int Rational::compareTo(const Rational& r2) const {
	Rational temp = subtract(r2);
	if (temp.getNumerator() < 0)	return -1;
	else if (temp.getNumerator() == 0) return 0;
	else return 1;
}

// <, <=, >=, ==, !=
bool Rational::operator<(const Rational& r2) const {
	return (compareTo(r2) < 0);
}
bool Rational::operator<=(const Rational& r2) const {
	return (compareTo(r2) <= 0);
}
bool Rational::operator>=(const Rational& r2) const{
	return (compareTo(r2) >= 0);
}
bool Rational::operator==(const Rational& r2)const {
	return (compareTo(r2) == 0);
}
bool Rational::operator!=(const Rational& r2) const {
	return (compareTo(r2) != 0);
}

bool Rational::equals(const Rational& secondRational) const {
	if (compareTo(secondRational) == 0) return true;
	else false;
}
int Rational::intValue() const {
	return numerator / denominator;
}
double Rational::doubleValue() const {
	return 1.0 * numerator / denominator;
}

// cout, cin
ostream& operator<<(ostream& out, Rational& r) {
	if (r.denominator == 1)
		out << r.numerator;
	else
		out << r.numerator << "/" << r.denominator;
	return out;
}
istream& operator>>(istream& in, Rational& r) {
	in >> r.numerator >> r.denominator;
	return in;
}

//[]
int &Rational::operator[](int num) {
	if (num == 0) return numerator;
	else return denominator;
}

// +=, -=, *=, /=
Rational Rational::operator+=(const Rational& r2) {
	*this = add(r2);
	return *this;
}
Rational Rational::operator-=(const Rational& r2) {
	*this = subtract(r2);
	return *this;
}
Rational Rational::operator*=(const Rational& r2) {
	*this = multiply(r2);
	return *this;
}
Rational Rational::operator/=(const Rational& r2) {
	*this = divide(r2);
	return *this;
}

//  後++ -- 前++ --
Rational Rational::operator++(int dummy) {
	Rational temp = *this;
	numerator += denominator;
	return temp;
}
Rational Rational::operator--(int dummy) {
	Rational temp = *this;
	numerator -= denominator;
	return temp;
}

Rational& Rational::operator++() {
	numerator += denominator;
	return *this;
}
Rational& Rational::operator--() {
	numerator -= denominator;
	return *this;
}

//正負號
Rational Rational::operator+() {
	return *this;
}
Rational Rational::operator-() {
	return Rational(-numerator, denominator);
}

void Rational::compareToVoid(const Rational& r2) {
	if (compareTo(r2) < 0) cout << numerator << "/" << denominator << "<" << r2.toString();
	else if ( compareTo(r2) == 0) cout << numerator << "/" << denominator << "=" << r2.toString();
	else cout << numerator << "/" << denominator << ">" << r2.toString();

}
string Rational::toString() const {
	stringstream ss;
	ss << numerator;

	if (denominator > 1)
		ss << "/" << denominator;
	return ss.str();
	return ss.str();
}

Rational& Rational::operator=(const Rational& r2)  {
	numerator = r2.numerator;
	denominator = r2.denominator;
	
	return *this;
}