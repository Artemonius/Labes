#include<iostream>
#include "Time.h"
#include<vector>
using namespace std;
typedef vector<Time>v;
v vec;
vector<Time>::iterator it;
Time elec, ele;
int siz = 0, i, posc = 0, j = 0;
char ch;
//Function for make vector;
v make_container()
{
	system("chcp 1251>nul");
	cout << "Введите размер для этого контейнера : "; cin >> siz;
	for (i = 0; i < siz; i++)
	{
		cout << "Введите элемент для этого контейнера  " << i + 1 << endl; elec.set_min_sec();
		vec.push_back(elec);
	}
	return vec;
}
//Function for add elements for this container at any position ;
v Add_element_in_container()
{
	system("chcp 1251>nul");
	cout << "Сколько элементов вы хотите добавить в контейнер : "; cin >> siz;
	it = vec.begin();
	for (i = 0; i < siz; i++)
	{
		cout << "Введите элемент который вы хотите добавить в контейнер : " << endl; elec.set_min_sec();
		vec.emplace_back(elec);
	}
	return vec;
}
//Function for delete elements from front container and any position ;
v delete_element_from_contaier()
{
	system("chcp 1251>nul");
	it = vec.begin();
	cout << "Сколько элементов вы хотите удалить из контейнера : "; cin >> siz;
	for (i = 0; i < siz; i++)
	{
		cout << "Введите элемент который вы хотите удалить : "; ele.set_min_sec();
		if (*it == ele)
		{
			vec.erase(it);
		}
		else
		{
			it++;
		}
	}
	return vec;
}
//Function for print element's container  ;
void print_container()
{
	for (auto i : vec)
	{
		i.show();
	}
	cout << endl;
}
//Function for menu ;
void menu_container()
{
	system("chcp 1251>nul");
	print_container();
	cout << "               1: Добавить элемент           \n"
		<< "               2: Удалить элемент         \n"
		<< "               3: Распечатать контейнер         \n"
		<< "               4: Завершить программу        \n";
	cout << "Введите ваш выбор : "; cin >> j;
	switch (j)
	{
	case 1:
	{
		Add_element_in_container();
		menu_container();
		break;
	}
	case 2:
	{
		delete_element_from_contaier();
		menu_container();
		break;
	}
	case 3:
	{
		print_container();
		menu_container();
		break;
	}
	case 4:
	{
		break;
	}
	default:
		cout << "Ваш выбор некорректен \n";
		menu_container();
		break;
	}
}
int main()
{
	make_container();
	menu_container();
	system("pause");
	return 0;
}