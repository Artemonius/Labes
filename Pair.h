#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pair {
public:
	Pair(void);
public:
	virtual ~Pair(void);
	Pair(int F, int S);
	Pair(const Pair&);

	int get_first() { return first; }
	int get_second() { return second; }

	void set_first(int F);
	void set_second(int S);

	Pair& operator=(const Pair&);
	Pair& operator+(const Pair&);

	friend istream& operator >> (istream& in, Pair& t);
	friend ostream& operator << (ostream& out, const Pair& t);
protected:
	int first;
	int second;
};