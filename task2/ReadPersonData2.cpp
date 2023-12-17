#include "Header.h"

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	cout << "!Вызов второй перегруженной функции!" << endl;
	cout << "name : ";
	name = ReadPersonName();
	cout << "age : ";
	age = ReadPersonAge();
	cout << "height: ";
	ReadPersonHeight();
	cout << "weight: ";
	ReadPersonWeight(weight);
	cout << endl;
}