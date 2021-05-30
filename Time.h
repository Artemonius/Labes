#pragma once
#include<iostream>
using namespace std;
class Time
{
	int minute, second;
public:
	Time() :minute(0), second(0) {}
	void set_min_sec()
	{
		system("chcp 1251>nul");
		cout << "¬ведите часы : "; cin >> minute;
		cout << "¬ведите минуты : "; cin >> second;
	}
	int get_min()
	{
		return 	this->minute;
	}
	int get_sec()
	{
		return 	this->second;
	}
	Time operator -(const Time& obj)
	{
		Time object;
		object.minute = minute - obj.minute;
		object.second = second - obj.second;
		return Time(object);
	}
	bool operator ==(const Time& obj)
	{
		return (minute == obj.minute && second == obj.second);
	}
	bool operator !=(const Time& obj)
	{
		return (minute == obj.minute && second == obj.second);
	}
	void show()
	{
		cout << minute << ":" << second << endl;
	}
	Time operator=(const Time& ob)
	{
		this->minute = ob.minute;
		this->second = ob.second;
		return *this;
	}
	Time operator+=(const Time& ob)
	{
		this->minute += ob.minute;
		this->second += ob.second;
		return *this;
	}
	Time operator/(int n)
	{
		this->minute = this->minute / n;
		this->second = this->second / n;
		return *this;
	}
	Time operator*(const Time& ob)
	{
		this->minute = minute * ob.minute;
		this->second = second * ob.second;
		return *this;
	}
	bool operator<(const Time& ob)
	{
		return (this->minute < ob.minute&& this->second < ob.second);
	}
	bool operator>(const Time& ob)
	{
		return (this->minute > ob.minute && this->second > ob.second);
	}
	bool operator<=(const Time& ob)
	{
		return (this->minute <= ob.minute && this->second <= ob.second);
	}
	friend istream& operator>>(istream& in, Time& ob);
	friend ostream& operator<<(ostream& out, Time& ob);

	~Time() {}
};
istream& operator >>(istream& in, Time& ob)
{
	in >> ob.minute >> ob.second;
	return in;
}
ostream& operator<<(ostream& out, Time& ob)
{
	out << ob.minute << " : " << ob.second;
	return out;
}