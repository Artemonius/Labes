#pragma once
#include "Pair.h" 

class Money :
	public Pair
{
public:
	Money(void);
public:
	~Money(void);
	void Show();//функция для просмотра атрибутов класса с помощью указателя 
	Money(int, int, int, int);
	Money(const Money&);
	int get_rub() { return n_rub; }
	int get_kop() { return n_kop; }
	void set_Money(int, int);
	Money& operator+(const Money&);
	Money& operator-(const Money&);
	Money& operator=(const Money&);
	Money& operator/(const Money&);
	friend istream& operator>>(istream& in, Money& l);
	friend ostream& operator<<(ostream& out, const Money& l);
protected:
	int n_rub;
	int n_kop;
};