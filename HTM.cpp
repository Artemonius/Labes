#include "HTM.h"
#include <iostream>
using namespace std;
void HTM::read(double f, int s)
{
	system("chcp 1251>nul");
	cout << "������� ���������� ����� : "; 
	cin >> f;
	while (f < 0) {
		cout << "������� ���������� ���������� �����";
		cin >> f;
	}
	cout << "������� ���������� ����� : "; cin >> s;
	while (s < 0) {
		cout << "������� ���������� ���������� �����";
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
	cout << "����� = " << frist << endl;
	cout << "����� = " << second << endl;
	cout << "����� � ������� = " << calculat() << endl;
}
