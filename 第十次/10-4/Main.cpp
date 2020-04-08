#include<iostream>
using namespace std;

#include"Date.h"
#include"Student.h"

int main() {

	Date birth1(6, 1, 1999);
	Date birth2(10, 8, 1997);

	Student student1("John", birth1, 90);
	Student student2("Marry", birth2, 80);

	string name;
	int year, mon, day;
	cin >> name >> mon >> day >> year;

	student1.setName(name);
	student2.setDate(mon, day, year);

	student1.print();
	student2.print();

	system("pause");
	return 0;

}
