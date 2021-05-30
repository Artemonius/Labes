#include<iostream>
using namespace std;
#include<list>
typedef  list<float> L;
int siz = 0, j = 0, pos = 0, i = 0;
float ele;
char ch;   L l;
//function for make a list;
L Make_list()
{
	system("chcp 1251>nul");

	cout << "������� ������ ����� ������ ";	cin >> siz;

	auto it = l.begin();

	for (int i = 0; i < siz; i++)
	{
		cout << "������� ����� ��������� � ���� ������ : "; cin >> ele;
		l.emplace(it, ele);
	}
	l.resize(siz);
	return l;
}
//function for print list;
void print_list(L l)
{
	cout << "���� ������� � ������ : " << endl;
	for (auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
}
//Function for add eleement from frist , end or any position in list;
void Add_element_in_list()
{

	cout << "�� ������ �������� ������� � ����� ('b') , � ������ ('f') ��� � ������ ������� ('p') : "; cin >> ch;
	cout << "How much elements you want add in this list : "; cin >> siz;
	auto  it = l.begin();
	switch (ch)
	{
	case 'b':
	{

		for (i = 0; i < siz; i++)
		{
			cout << "������� ����� �������� � ���� ������: "; cin >> ele;
			l.emplace_back(ele);
		}
		break;
	}
	case'f':
	{

		for (i = 0; i < siz; i++)
		{
			cout << "������� ����� �������� � ���� ������ : "; cin >> ele;
			l.emplace_front(ele);
		}
		break;
	}
	case'p':
	{

		cout << "������� �������, � ������� �� ������ �������� ������� : "; cin >> pos;
		it = l.begin();
		while (j != pos)
		{
			it++;
		}
		for (; it != l.end(); it++)
		{
			cout << "������� ����� �������� � ���� ������ "; cin >> ele;
			l.emplace(it, ele);
		}
		break;
	}
	default:
	{
		cout << "��� ����� ����������� " << endl;
		Add_element_in_list();
		break;
	}
	}
}
//Function for delete eleement from frist , end or any position from list;
void delete_element_from_list()
{
	cout << "�� ������ ������� ������� � ����� ('b') , � ������ ('f') ��� � ������ �������('p') : "; cin >> ch;
	cout << "������� ��������� �� ������ ������� �� ����� ������ : "; cin >> siz;
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
		cout << "������� �������, � ������� �� ������ �������� � ������ : "; cin >> pos;
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
		cout << "��� ����� ����������� " << endl;
		delete_element_from_list();
		break;
	}
	}
}
void Menu_list()   //Menu functions for problem 1;
{
	Make_list();
	print_list(l);
	while (true)
	{

		cout << "          1: �������� �������             \n"
			<< "           2: ������� �������       \n"
			<< "           3: ����������� ������              \n"
			<< "           4: ��������� ������ ���������                   \n";
		cout << "������� ��� ����� : "; cin >> j;
		switch (j)
		{
		case 1:
		{
			Add_element_in_list();
			break;
		}
		case 2:
		{
			delete_element_from_list();
			break;
		}
		case 3:
		{
			print_list(l);
			break;
		}
		case 4:
		{
			system("pause");
			break;
		}
		default:
		{
			cout << "��� ����� ����������� " << endl;
			Menu_list();
			break;
		}
		}
	}
}
int main()
{


	Menu_list();
	return 0;
}
