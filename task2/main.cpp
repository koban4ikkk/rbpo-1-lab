#include "Header.h"

#ifndef DO_NOT_DEFINE_MAIN
int main(int argc, char** argv)
{
	setlocale(0, "");

	unsigned short weight, age;
	string strHeight, strWeight;
	string name;
	double salary;

	ReadPersonData(name, age, salary);
	strGlobalSalary = to_string(salary);
	WritePersonData(name, strHeight, strWeight, &age);
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, to_string(height), to_string(weight), &age);

	return 0;
}
#endif
