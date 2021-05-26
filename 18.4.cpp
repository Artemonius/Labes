#pragma once
#include "Pair.h"
#include "Money.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	Pair a(0, 0);
	cout << a;
	Pair b(30, 20);
	cout << b;
	a = b;
	cout << a;
	Money c;
	Money d;
	cin >> c;
	cin >> d;
	c = c / d;
	cout << c << endl;
}