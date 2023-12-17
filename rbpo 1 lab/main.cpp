#include <iostream>
#include <string>
using namespace std;

unsigned short height;
string strGlobalSalary;

unsigned short ReadPersonAge()
{
	unsigned short age;
	cin >> age;
	return age;
}
string ReadPersonName()
{
	string name;
	cin >> name;
	return name;
}
void ReadPersonHeight()
{
	cin >> height;
}
void ReadPersonWeight(unsigned short& weight)
{
	cin >> weight;
}
void ReadPersonSalary(double* salary)
{
	cin >> *(salary);
}
void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cout << "Input name: ";
	name = ReadPersonName();
	cout << "Input age: ";
	age = ReadPersonAge();
	cout << "Input salary: ";
	ReadPersonSalary(&salary);
}
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	cout << "Input name: ";
	name = ReadPersonName();
	cout << "Input age: ";
	age = ReadPersonAge();
	cout << "Input height: ";
	ReadPersonHeight();
	cout << "Input weight: ";
	ReadPersonWeight(weight);
}

void WritePersonData(const string& name,
	const string& height = "",
	const string& weight = "",
	const unsigned short* age = 0)
{
	cout << "------------------------------" << endl;
	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Age: " << *(age) << endl;
	cout << "Salary: " << strGlobalSalary << endl;
	cout << "------------------------------" << endl;
}

#ifndef DO_NOT_DEFINE_MAIN
int main(int argc, char** argv)
{
	unsigned short weight, age;
	string strHeight, strWeight, name;
	double salary;

	ReadPersonData(name, age, salary);
	strGlobalSalary = to_string(salary);
	WritePersonData(name, strHeight, strWeight, &age);
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, to_string(height), to_string(weight), &age);

	return 0;
}
#endif
