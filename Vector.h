#pragma once
#include<iostream>
using namespace std;
template<class T>
class Vector
{
public:
	int size;
	T* data;
public:
	Vector() :size(0), data(NULL) {}
	Vector(int s, T element = 0)
	{
		system("chcp 1251>nul");
		cout << "введите количетво элементов в контейнере: ";
		cin >> size;
		size = s;
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = element;
		}
	}
	Vector(const Vector& ob)
	{
		size = ob.size;
		for (int i = 0; i < ob.size; i++)
		{
			data[i] = ob.data[i];
		}
	}
	Vector& operator=(const Vector& ob)
	{
		if (this == &ob)return *this;
		size = ob.size;
		if (data != 0)
			delete[]data;
		data = new int[size];
		for (int i = 0; i < ob.size; i++)
		{
			data[i] = ob.data[i];
		}
		return *this;
	}
	int& operator[](int index)
	{
		if (index < size)return data[index];
		else
		{
			cout << "index > size " << endl;

			return *data;
		}
	}
	Vector& operator+(int element)	   //*
	{

		for (int i = 0; i < size; i++)
		{
			this->data = this->data[i] + &element;
		}
		return *this;
	}
	int operator()()
	{
		return size;
	}
	Vector& operator*(const  Vector& ob)
	{
		for (int i = 0; i < ob.size; i++)
			ob.data[i] *= ob.data[i];
		return *this;
	}
	friend istream& operator>>(istream& in, const Vector& ob)
	{

		for (int i = 0; i < ob.size; i++)
			in >> ob.data[i];
		return in;

	}
	friend ostream& operator<<(ostream& out, const Vector& ob)
	{
		for (int i = 0; i < ob.size; i++)
			out << ob.data[i] << " ";
		return out;
	}
	~Vector() { delete[]data; data = NULL; }
};

