#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<class T>
class Vector
{
	vector<T>v;
	int siz;
public:
	Vector(void) :siz(0) {}
	Vector(int s)
	{
		T ele;
		for (int i = 0; i < s; i++)
		{
			cout << "������� �������� �������� ��� ������� : " << i + 1 << endl;
			cin >> ele;
			v.push_back(ele);
		}
		siz = v.size();
	}
	void print()
	{
		for (unsigned i = 0; i < v.size(); i++)
		{
			cout << v[i] << endl;
		}
		cout << endl;
	}

	void add_element()
	{
		int pos = 0, num = 0; T ele;
		cout << "������� ����� ��������, ������� �� ������ �������� : "; cin >> num;
		cout << "������� ������� ����� �������� : "; cin >> pos;
		for (int i = 0; i < num; i++)
		{
			cout << "������� ������� : "; cin >> ele;
			v.insert((v.begin() + pos + i), ele);
		}
	}
	void delete_element()
	{
		int pos = 0, i = 0;
		auto it = v.begin();
		cout << "������� ������� �������� "; cin >> pos;
		while (i != pos)
		{
			++it;
			i++;
		}
		v.erase(it);
	}
	void minimum_element()
	{
		for (unsigned i = 1; i < v.size(); i++)
		{
			if (v[0] > v[i])
			{
				swap(v[i], v[0]);
			}
		}
		cout << "������� : " << v[0] << endl;
	}
};
