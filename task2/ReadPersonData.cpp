#include "Header.h"

string strGlobalSalary;

void WritePersonData(const string& name,
	const string& height = "",
	const string& weight = "",
	const unsigned short* age = 0)
{
	cout << "------------------------------" << endl;
	cout << "���: " << name << endl;
	cout << "����: " << height << endl;
	cout << "���: " << weight << endl;
	cout << "�������: " << *(age) << endl;
	cout << "�����: " << strGlobalSalary << endl;
	cout << "------------------------------" << endl;
}