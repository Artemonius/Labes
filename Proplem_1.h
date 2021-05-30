#pragma once
#include<list>
typedef  list<float> L;
system("chcp 1251>nul");
int siz = 0, j = 0, pos = 0, i = 0;
float ele;
char ch;   L l;
//function for make a list;
L Make_list()
{

	cout << "Введите размер списка ";	cin >> siz;

	auto it = l.begin();

	for (int i = 0; i < siz; i++)
	{
		cout << "Введите номер элемента в списке : "; cin >> ele;
		l.emplace(it, ele);
	}
	l.resize(siz);
	return l;
}
//function for print list;
void print_list(L l)
{
	cout << "Этот элемент в списке : " << endl;
	for (auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
}
//Function for add eleement from frist , end or any position in list;
void Add_element_in_list()
{

	cout << "Вы хотите добавить элементы с конца ('b') , с начала ('f') или с другой позиции ('p') : "; cin >> ch;
	cout << "Сколько элементов вы хотите добавить в список : "; cin >> siz;
	auto  it = l.begin();
	switch (ch)
	{
	case 'b':
	{

		for (i = 0; i < siz; i++)
		{
			cout << "Введите номер элемента в списке : "; cin >> ele;
			l.emplace_back(ele);
		}
		break;
	}
	case'f':
	{

		for (i = 0; i < siz; i++)
		{
			cout << "Введите номер элемента в этом списке : "; cin >> ele;
			l.emplace_front(ele);
		}
		break;
	}
	case'p':
	{

		cout << "Введите позицию на которую вы хотите добавить элемент : "; cin >> pos;
		it = l.begin();
		while (j != pos)
		{
			it++;
		}
		for (; it != l.end(); it++)
		{
			cout << "Введите номер элемента в списке "; cin >> ele;
			l.emplace(it, ele);
		}
		break;
	}
	default:
	{
		cout << "Ваш выбор некорректен " << endl;
		Add_element_in_list();
		break;
	}
	}
}
//Function for delete eleement from frist , end or any position from list;
void delete_element_from_list()
{
	cout << "Вы хотите удалить с конца ('b') , с начала ('f') или  с другой позиции('p') : "; cin >> ch;
	cout << "Сколько элементов вы хотите удалить из списка : "; cin >> siz;
	list<float>::iterator it;
	switch (ch)
	{
	case 'b':
	{
		for (int i = 0; i < siz; i++)
		{
			l.pop_back();
		}
		break;
	}
	case'f':
	{
		for (int i = 0; i < siz; i++)
		{
			l.pop_front();
		}
		break;
	}
	case'p':
	{
		int j = 0, pos;
		cout << "Введите позицию на которую вы хотите добавить элемент : "; cin >> pos;
		it = l.begin();
		while (j != pos)
		{
			it++;
		}
		for (int i = 0; i < siz; i++)
		{
			l.erase(it);
		}
		break;
	}
	default:
	{
		cout << "Ваш выбор некорректен " << endl;
		delete_element_from_list();
		break;
	}
	}
}
void Menu_list()   //Menu functions for problem 1;
{
	Make_list();
	print_list(l);
	cout << "          1: Добавить элементы           \n"
		<< "           2: Удалить элемент          \n"
		<< "           3: Распечатать список          \n";
	cout << "Введите ваш выбор : "; cin >> j;
	switch (j)
	{
	case 1:
	{
		//Add_element_in_list();
		break;
	}
	case 2:
	{
		//delete_element_from_list();
		break;
	}
	case 3:
	{
		print_list(l);
		break;
	}
	default:
	{
		cout << "Ваш выбор некорректен " << endl;
		Menu_list();
		break;
	}
	}
}