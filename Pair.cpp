#pragma once
#include "Pair.h"

Pair::Pair(void)
{
	first = 0; second = 0;
}
Pair::~Pair(void)
{
}
Pair::Pair(int C, int P)
{
	first = C; second = P;
}
Pair::Pair(const Pair& Pair)
{
	first = Pair.first; second = Pair.second;
}
void Pair::Set_first(int C)
{
	first = C;
}
void Pair::Set_second(int P)
{
	second = P;
}
Pair& Pair::operator=(const Pair& c)
{
	if (&c == this)return *this;
	second = c.second;
	first = c.first;
	return *this;
}
istream& operator>>(istream& in, Pair& c)
{
	cout << "\nПервое:"; in >> c.first; cout << "\nВторое:"; in >> c.second; return in;
}
ostream& operator<<(ostream& out, const Pair& c)
{
	out << "\nПервое:" << c.first; out << "\nВторое:" << c.second; out << "\n";
	return out;
}
void Pair::Show()
{
	cout << "\nПервое: " << first; cout << "\nВторое: " << second; cout << "\n";
}
