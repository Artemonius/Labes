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
	Vector v(5);//вектор из 5 элементов 
	Pair a;//объект класса Pair
	cin >> a;
	Money b;// объект класса Money 
	cin >> b;
	Object* p = &a;//ставим указатель на объект класса 
	v.Add(p);//добавляем объект в вектор
	p = &b;//ставим указатель на объект класса 
	v.Add(p); //добавляем объект в вектор 
	cout << v;//вывод вектора
}
