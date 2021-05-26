#include "HTM.h"
#include <iostream>
using namespace std;
void HTM::read(double f, int s)
{
	system("chcp 1251>nul");
	cout << "Введите количество часов : "; 
	cin >> f;
	while (f < 0) {
		cout << "введите правильное количество часов";
		cin >> f;
	}
	cout << "Введите количество минут : "; cin >> s;
	while (s < 0) {
		cout << "введите правильное количество минут";
		cin >> s;
	}
	if (s < 0 && f < 0)
	{
		cout << "Hours and minutes not correct " << endl;
		cout << "Enter hours : "; cin >> f;
		cout << "Enter minutes : "; cin >> s;
	}
	frist = f; 
	second = s;
}
double HTM::calculat()
{

	return (frist * 60) + second;
}
void HTM::print()
{
	cout << "Часов = " << frist << endl;
	cout << "Минут = " << second << endl;
	cout << "Время в минутах = " << calculat() << endl;
}
