#pragma once
#include "Money.h"
#include <iostream>
#include <math.h>
Money::Money(void) :Pair() {
	n_rub = 0;
	n_kop = 0;
}

Money::~Money(void) {

}

Money::Money(int F, int S, int T, int N) :Pair(F, S) {
	n_rub = T;
	n_kop = N;
}

Money::Money(const Money& t) {
	first = t.first;
	second = t.second;
	n_rub = t.n_rub;
	n_kop = t.n_kop;
}

void Money::set_Money(int T, int N) {
	n_rub = T;
	n_kop = N;
}

Money& Money::operator+(const Money& t) {
	n_kop = t.n_kop + n_kop;
	n_rub = t.n_rub + n_rub;
	while (n_kop >= 100)
	{
		n_rub++;
		n_kop = n_kop - 100;
	}
	return *this;
}

Money& Money::operator=(const Money& t) {
	first = t.first;
	second = t.second;
	n_kop = t.n_kop;
	n_rub = t.n_rub;
	return *this;
}

Money& Money::operator/(const Money& t)
{
	if (t.n_rub == 0 & t.n_kop == 0) return *this;
	double del = (n_rub * 100 + n_kop) / (t.n_rub * 100 + t.n_kop) * 100;
	if (del >= 100)
	{
		n_rub = del / 100;
		n_kop = round(del);
		n_kop = n_kop % 100;
	}
	else if (del < 100 && del >= 0)
	{
		n_rub = 0;
		n_kop = del;
		n_kop = n_kop % 100;
	}
	return *this;
}

Money& Money::operator-(const Money& t) {
	n_kop = n_kop - t.n_kop;
	n_rub = n_rub - t.n_rub;
	while (n_kop < 0)
	{
		n_rub--;
		n_kop = n_kop + 100;
	}
	return *this;
}

istream& operator>>(istream& in, Money& d) {
	cout << "¬ведите количество рублей: "; in >> d.n_rub; while (d.n_rub < 0) { cout << endl << "¬ведите положительное значение:"; in >> d.n_rub; cout << endl; }
	cout << "¬ведите количество копеек: "; in >> d.n_kop; while ((d.n_kop < 0) || (d.n_kop > 100)) { cout << endl << "¬ведите корректное значение:"; in >> d.n_kop; cout << endl; }
	return in;
}

ostream& operator<<(ostream& out, const Money& d) {
	out << d.n_rub;
	if (d.n_kop < 10) { out << ".0" << d.n_kop; }
	else { out << "." << d.n_kop; }
	return out;
}