#include"StuCard.h"

int main() {

	StuCard StuArray[5] = {
		StuCard("Jerry", 1, 80.0, 70.0, 90.0),
		StuCard("John", 1, 85.0, 77.0, 95.0),
		StuCard("Mary", 0, 83.0, 75.0, 70.0),
		StuCard("Tom", 1, 73.0, 95.0, 67.0),
		StuCard("Claire", 0, 88.0, 79.0, 71.0)
	};

	StuArray[0].writeToFile(StuArray);
	StuArray[0].readFromFile(StuArray);

	system("pause");
	return 0;
}