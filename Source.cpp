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
	cout << "Введите размерность контейнера : "; cin >> siz;
	it = stt.begin();
	for (i = 0; i < siz; i++)
	{
		cout << "Введите элемент : "; cin >> eles;
		stt.emplace_hint(it, eles);
	}
}
void add_element_()
{
	cout << "Введите количество элементов, которые необходимо добавить в контейнер: "; cin >> num;
	it = stt.begin();
	for (i = 0; i < num; i++)
	{
		cout << "Введите элемент : "; cin >> eles;
		stt.emplace_hint(it, eles);
	}
}
void delete_element_()
{
	cout << "Введите количество элементов, которые вам нужно удалить : "; cin >> num; //Enter number of rlrmnts you need delete them
	for (i = 0; i < num; i++)
	{
		cout << "Введите номер, который вам нужно удалить : "; cin >> eles; //Enter a number you need delete it
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
	cout << "Минимум : " << endl;
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
		cout << "             1: Добавить элементы            \n"
			<< "             2: Удалить элементы          \n"
			<< "             3: Минимальный элемент         \n"
			<< "             4: Удалить элементы больше среднего  \n"
			<< "             5: Умножение элементов на максимум \n"
			<< "             6: Печать         \n"
			<< "             7: Конец                    \n";
		cout << "Введите ваш выбор : "; cin >> choice;
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
