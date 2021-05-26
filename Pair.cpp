#pragma once
#include "Pair.h"

Pair::Pair(void) {
	first = 0;
	second = 0;
}

Pair::~Pair(void) {

}

Pair::Pair(int F, int S) {
	first = F;
	second = S;
}

Pair::Pair(const Pair& Pair) {
	first = Pair.first;
	second = Pair.second;
}

void Pair::set_first(int F) {
	first = F;
}

void Pair::set_second(int S) {
	second = S;
}

Pair& Pair::operator=(const Pair& t) {
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}

Pair& Pair::operator+(const Pair& t) {
	if (&t == this) return *this;
	first = first + t.first;
	second = second + t.second;
	return *this;
}


istream& operator>>(istream& in, Pair& t) {
	cout << "¬ведите первое число: "; in >> t.first;
	cout << "¬ведите второе число: "; in >> t.second;
	return in;
}


ostream& operator<<(ostream& out, const Pair& t) {
	out << t.first << "." << t.second << endl;
	return out;
}
