#include "Header.h"

string strGlobalSalary;

void WritePersonData(const string& name,
	const string& height = "",
	const string& weight = "",
	const unsigned short* age = 0)
{
	cout << "------------------------------" << endl;
	cout << "Имя: " << name << endl;
	cout << "Рост: " << height << endl;
	cout << "Вес: " << weight << endl;
	cout << "Возраст: " << *(age) << endl;
	cout << "Оклад: " << strGlobalSalary << endl;
	cout << "------------------------------" << endl;
}