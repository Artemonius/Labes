#include "Pair.h" 

// Зануление элементов
Pair::Pair(void)
{
	M1 = M2 = 0;
}

// Присваивание чисел
Pair::Pair(int chislo1, double chislo2)
{
	M1 = chislo1;
	M2 = chislo2;
}

Pair::Pair(const Pair& t)
{
	M1 = t.M1;
	M2 = t.M2;
}

// Операция присваивания
Pair& Pair::operator =(const Pair& t)
{
	M1 = t.M1;
	M2 = t.M2;
	return*this;
}

// Вывод чисел
ostream& operator<<(ostream& out, const Pair& t)
{
	out << t.M1 << " : " << t.M2;
	return out;
}

// Ввод чисел
istream& operator>>(istream& in, Pair& t)
{
	system("chcp 1251>nul");
	cout << "\nПервое число? ";
	in >> t.M1;
	cout << "\nВторое число? ";
	in >> t.M2;
	return in;
}

