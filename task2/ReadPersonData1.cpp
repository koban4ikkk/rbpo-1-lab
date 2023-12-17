#include "Header.h"

void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cout << "!Вызов первой перегруженной функции!" << endl;
	cout << " name: ";
	name = ReadPersonName();
	cout << " age: ";
	age = ReadPersonAge();
	cout << " salary: ";
	ReadPersonSalary(&salary);
	cout << endl;
}