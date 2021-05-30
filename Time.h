#pragma once
#include<iostream>
using namespace std;
class Time
{
	int min, sec;
public:
	Time() :min(0), sec(0) {}
	Time(int m, int s)
	{
		min = m; sec = s;
	}
	Time(const Time& ob)
	{
		min = ob.min; sec = ob.sec;
	}
	Time operator=(const Time& ob)
	{
		min = ob.min; sec = ob.sec;
		return *this;
	}
	Time operator +(const Time& ob)
	{
		Time temp;
		temp.min = min + ob.min;
		temp.sec = sec + ob.sec;
		return temp;
	}
	Time operator -(const Time& ob)
	{
		Time temp;
		temp.min = min - ob.min;
		temp.sec = sec - ob.sec;
		return temp;
	}
	Time operator+(int num)
	{
		Time temp;
		temp.min += num;
		temp.sec += num;
		return temp;
	}
	bool operator>(const Time& ob)
	{
		return (this->min > ob.min && this->sec > ob.sec);
	}
	friend istream& operator>>(istream& in, Time& ob);
	friend ostream& operator<<(ostream& out, Time& ob);
};
istream& operator >>(istream& in, Time& ob)
{
	in >> ob.min >> ob.sec;
	return in;
}
ostream& operator<<(ostream& out, Time& ob)
{
	out << ob.min << " : " << ob.sec;
	return out;
}
