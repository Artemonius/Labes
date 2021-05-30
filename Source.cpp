#include<iostream>
#include<vector>
#include<algorithm>
#include"Time.h"
using namespace std;
typedef vector<Time>v;
v vec;
vector<Time>::iterator it;
Time elec, ele;
int siz = 0, i, posc = 0, j = 0;
char ch;
v make_container();
v Add_element_in_container();
v delete_element_from_contaier();
v delete_element_from_contaier();
void delete_item_greater_than_avarage();
void menu_container();
void print_container();


int main()
{
	make_container();
	menu_container();
	system("pause");
	return 0;
}
v make_container()
{
	system("chcp 1251>nul");
	cout << "������� ������ ��� ����� ���������� : "; cin >> siz;
	for (i = 0; i < siz; i++)
	{
		cout << "������� ������� ����������  " << i + 1 << endl; elec.set_min_sec();
		vec.push_back(elec);
	}
	return vec;
}
//Function for add elements for this container at any position ;
v Add_element_in_container()
{
	system("chcp 1251>nul");
	cout << "������� ��������� �� ������ �������� � ��������� : "; cin >> siz;
	it = vec.begin();
	for (i = 0; i < siz; i++)
	{
		cout << "������� �������, ������� �� ������ �������� : " << endl; elec.set_min_sec();
		vec.emplace_back(elec);
	}
	return vec;
}
//Function for delete elements from front container and any position ;
v delete_element_from_contaier()
{
	system("chcp 1251>nul");
	it = vec.begin();
	cout << "������� ��������� �� ������ ������� �� ���������� : "; cin >> siz;
	for (i = 0; i < siz; i++)
	{
		cout << "������� ������� ������� �� ������ ������� : "; ele.set_min_sec();
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
	cout << "       ��� ��������        \n";
	for (auto i : vec)
	{
		i.show();
	}
	cout << endl;
}
//Function for delete items greater than avarege item;
void delete_item_greater_than_avarage()
{
	Time sum;
	for (int i = 0; i < siz; i++)
	{
		sum += vec[i];
	}
	sum = sum / siz;
	it = vec.begin();

	for (unsigned i = 0; i < vec.size(); i++)
	{
		if (vec[i] < sum)
		{
			swap(vec.back(), vec[i]);
			vec.pop_back();
		}
	}
	for (unsigned i = 0; i < vec.size(); i++)
	{
		swap(vec.back(), vec[i]);
	}
}
//Function for menu ;
void menu_container()
{
	while (true)
	{
		system("chcp 1251>nul");
		print_container();
		cout << "               1: �������� �������            \n"
			<< "               2: ������� �������          \n"
			<< "               3: ����������� ���������         \n"
			<< "               4: ������� ������� (������� ��������)\n"
			<< "               5. ��������� ���������\n";
		cout << "������� ��� ����� : "; cin >> j;
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
			delete_item_greater_than_avarage();
			break;
		}
		case 5: {
			system("pause");
			return;
		}
		default:
			cout << "��� ����� ����������� \n";
			menu_container();
			break;
		}
	}

}