#include"Header.h"
#include"Time.h"
#include <iostream>
using namespace std;
#include <vector>


int main()
{
	system("chcp 1251>nul");
	int siz = 0, ch = 0, num = 0, pos = 0;
	cout << "������� ������ ���������� : "; cin >> siz;
	Vector<Time>vec(siz);
	while (true)
	{
		cout << "           1: �������� ��������           \n"
			<< "            2: ������� ��������        \n"
			<< "            3: ����� ������������ ��������        \n"
			<< "            4: ������                  \n"
			<< "            5: ��������� ���������            \n";
		cout << "������� ��� ����� : "; cin >> ch;
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
			cout << "����� ����������� \n";
			break;
		}
	}
}