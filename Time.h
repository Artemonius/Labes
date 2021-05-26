#pragma once
#include<iostream>
using namespace std;
class Time
{
	int minute, second;
public:
	Time();
	void set_min_sec();
	Time operator -(const Time& obj);
	bool operator ==(const Time& obj);
	bool operator !=(const Time& obj);
	void show();
	~Time();
};


