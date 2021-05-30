#include"Header.h"
#include"Time.h"
#include <iostream>
using namespace std;
#include <vector>


int main()
{
	system("chcp 1251>nul");
	int siz = 0, ch = 0, num = 0, pos = 0;
	cout << "введите размер контейнера : "; cin >> siz;
	Vector<Time>vec(siz);
	while (true)
	{
		cout << "           1: Добавить элементы           \n"
			<< "            2: Удалить элементы        \n"
			<< "            3: Поиск минимального элемента        \n"
			<< "            4: Печать                  \n"
			<< "            5: Завершить программу            \n";
		cout << "Введите ваш выбор : "; cin >> ch;
		switch (ch)
		{
		case 1:
		{
			vec.add_element();
			break;
		}
		case 2:
		{
			vec.delete_element();
			break;
		}
		case 3:
		{
			vec.minimum_element();
			break;
		}
		case 4:
		{
			vec.print();
			break;
		}
		case 5:
		{
			system("pause");
			return 0;
			break;
		}
		default:
			cout << "Выбор некорректен \n";
			break;
		}
	}
}