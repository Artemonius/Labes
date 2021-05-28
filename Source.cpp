#pragma once
#include<iostream>
#include<set>
using namespace std;

typedef set<float>sT;
set<float>::iterator it;
sT stt;
int siz = 0, i = 0, num = 0, choice = 0;
float eles, sum;
void make_set_()
{
	cout << "������� ����������� ���������� : "; cin >> siz;
	it = stt.begin();
	for (i = 0; i < siz; i++)
	{
		cout << "������� ������� : "; cin >> eles;
		stt.emplace_hint(it, eles);
	}
}
void add_element_()
{
	cout << "������� ���������� ���������, ������� ���������� �������� � ���������: "; cin >> num;
	it = stt.begin();
	for (i = 0; i < num; i++)
	{
		cout << "������� ������� : "; cin >> eles;
		stt.emplace_hint(it, eles);
	}
}
void delete_element_()
{
	cout << "������� ���������� ���������, ������� ��� ����� ������� : "; cin >> num; //Enter number of rlrmnts you need delete them
	for (i = 0; i < num; i++)
	{
		cout << "������� �����, ������� ��� ����� ������� : "; cin >> eles; //Enter a number you need delete it
		it = stt.find(eles);
		stt.erase(*it);
	}
}
void delete_elements_greater_than_middel_()
{
	for (auto st : stt)
	{
		sum += st;
	}
	sum = sum / stt.size();
	it = stt.begin();
	for (unsigned i = 0; i < stt.size(); i++)
	{
		if (*it > sum)
		{
			stt.erase(*it);

		}
		else
		{
			it++;
			continue;

		}
	}
}
void minimum_element_()
{
	it = stt.begin();
	eles = *it;
	cout << "������� : " << endl;
	for (auto s : stt)
	{
		cout << s << "   ";
	}
	cout << endl;
}
//source.cpp............................................................................
//#include"Header.h"
int main()
{
	system("chcp 1251>nul");
	make_set_();
	while (true)
	{
		cout << "             1: �������� ��������            \n"
			<< "             2: ������� ��������          \n"
			<< "             3: ����������� �������         \n"
			<< "             4: ������� �������� ������ ��������  \n"
			<< "             5: ��������� ��������� �� �������� \n"
			<< "             6: ������         \n"
			<< "             7: �����                    \n";
		cout << "������� ��� ����� : "; cin >> choice;
		switch (choice)
		{
		case 1:
		{
			add_element_();
			break;
		}
		case 2:
		{
			delete_element_();
			break;
		}
		case 3:
		{
			minimum_element_();
			break;
		}
		case 4:
		{
			delete_elements_greater_than_middel_();
			break;
		}
		case 5:
		{
			multiply_elements_by_maximum_();
			break;
		}
		case 6:
		{
			print_set_();
			break;
		}
		case 7:
		{
			stt.clear();
			system("pause");
			return 0;
			break;
		}
		default:
			cout << "Your choice not correct \n";
			break;
		}
	}
	system("pause");
	return 0;
}
