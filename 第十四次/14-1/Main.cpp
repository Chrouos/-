#include"Rational.h"

int main() {

	Rational f1(2, 3);
	Rational f2(5, 7);
	Rational f3(3, 5);

	Rational s1(7, 2);
	Rational s2(5, 6);
	Rational s3(5, 7);

	Rational first = f1 + f2 * f3;
	Rational second = (s1 - s2) / s3;

	cout << "first=" << first << endl;
	cout << "second=" << second << endl;
	/*
	cout << "++first=" << ++first << endl;
	cout << "--second=" << --second << endl;
	//first.compareToVoid(second);
	cout << first << (first < second ? "<" : (first == second) ? "=" : ">") << second << endl;
	*/

	first += second;
	cout << "first+=second=" << first << endl;
	cout << first[0] << endl;

	





	system("pause");
	return 0;
}