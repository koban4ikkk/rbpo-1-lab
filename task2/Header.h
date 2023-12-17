#pragma once
#include <iostream>
#include <string>
#include <locale>

using namespace std;

extern string strGlobalSalary;
extern unsigned short height;

void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight);
void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age);

string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonSalary(double* salary);
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);


