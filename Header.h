#pragma once
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
template<class T>
class Vector
{
	stack<T>s;
	int siz;
public:

	Vector(void) :siz(0) {}
	Vector(int n)
	{
		T ele;
		for (int i = 0; i < n; i++)
		{
			system("chcp 1251>nul");
			cout << "Введите номер элемента : " << i + 1 << endl;
			cin >> ele;
			s.push(ele);
		}
		siz = s.size();
	}
	vector<T>copy_s_to_v(stack<T>s)
	{
		vector<T>vec;
		while (!s.empty())
		{
			vec.push_back(s.top());
			s.pop();
		}

		return vec;
	}
	stack<T>copy_v_to_s(vector<T>vec)
	{
		stack<T>st;
		for (unsigned i = 0; i < vec.size(); i++)
		{
			st.push(vec[i]);
			i++;

		}
		vec.clear();
		return st;
	}
	void print()
	{
		for (unsigned i = 0; i <= s.size() + 1; i++)
		{
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
	}
	stack<T> add_element()
	{
		system("chcp 1251>nul");
		int pos = 0, num = 0, i = 0; T ele;
		vector<T>vec = copy_s_to_v(s);
		cout << "Введите количество элементов, которое надо добавить : "; cin >> num;
		auto it = vec.begin();
		cout << "Введите позицию для этого элемента "; cin >> pos;
		while (i != pos)
		{
			++it;
			i++;
		}
		for (i = 0; i < num; i++)
		{
			cout << "Введите элемент : "; cin >> ele;
			vec.insert((vec.begin() + pos + i), ele);
		}
		s = copy_v_to_s(vec);
		return s;
	}
	stack<T> delete_element()
	{
		system("chcp 1251>nul");
		vector<T>vec = copy_s_to_v(s);
		int pos = 0, i = 0, num = 0;
		cout << "Введите количество элементов которое вам нужно удалть : "; cin >> num;
		for (int x = 0; x < num; x++)
		{
			auto it = vec.begin();
			cout << "Введите позицию для этого элемента "; cin >> pos;
			while (i != pos)
			{
				++it;
				i++;
			}
			vec.erase(it);
		}
		s = copy_v_to_s(vec);
		return s;
	}
	/*Vector<T> maximum_element()
	{
		vector<T>vec = copy_s_to_v(s);
		for (unsigned i = 1; i < s.size(); i++)
		{
			if (vec[0] < vec[i])
			{
				swap(vec[i], vec[0]);
			}
		}
		return v[0];
	   copy_v_to_s(vec);
	}*/
};


