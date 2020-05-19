#include"Complex.h"

int main() {

	Complex f1(3, 4);
	Complex f2(2, -4);
	Complex f3(3, -1);

	Complex s1(4, 3);
	Complex s2(5, 6);

	Complex first = f1 + f2 * f3;
	Complex second = s1 - s2;

	cout << "first=" << first << endl;
	cout << "second=" << second << endl;
	cout << "++first=" << ++first << endl;
	cout << "--second=" << --second << endl;

	system("pause");
	return 0;


}