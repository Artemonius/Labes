#pragma once
#include "Object.h" 
#include "Pair.h" 
#include "Money.h"
#include "Vector.h"
#include <string> 
#include <iostream> 
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	Vector v(5);//������ �� 5 ��������� 
	Pair a;//������ ������ Pair
	cin >> a;
	Money b;// ������ ������ Money 
	cin >> b;
	Object* p = &a;//������ ��������� �� ������ ������ 
	v.Add(p);//��������� ������ � ������
	p = &b;//������ ��������� �� ������ ������ 
	v.Add(p); //��������� ������ � ������ 
	cout << v;//����� �������
}
