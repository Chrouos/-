#ifndef BMI_H
#define Score_H
#include<string>
using namespace std;

class BMI
{
public:

	BMI();
	BMI(string newName, double newWidth, double newHeight);

	double getBMI();

	string getName();
	void setName(string newName);

private:

	string name;
	double weight;
	double height;

};




#endif // !BMI_H
