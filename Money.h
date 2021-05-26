#pragma once
#include "Pair.h"
#include <iostream>
class Money :
	public Pair
{
public:
	Money(void);
public:
	~Money(void);
	Money(int, int, int, int);
	Money(const Money&);
	int get_rub() { return n_rub; }
	int get_kop() { return n_kop; }
	void set_Money(int, int);
	Money& operator+(const Money&);
	Money& operator-(const Money&);
	Money& operator=(const Money&);
	Money& operator/(const Money&);
	friend istream& operator>>(istream& in, Money& d);
	friend ostream& operator<<(ostream& out, const Money& d);
protected:
	int n_rub;
	int n_kop;
};