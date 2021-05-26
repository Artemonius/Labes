#include "Time.h"
using namespace std;
Time::Time() :minute(0), second(0) {}

void Time::set_min_sec()
{
	system("chcp 1251>nul");
	cout << "¬ведите минуты : "; cin >> minute;
	while (minute < 0 || minute >= 60) {
		cout << "вы ввели неверное число, попробуйте заново";
		cin >> minute;
	}
	cout << "¬ведите секунды : "; cin >> second;
	while (second < 0 || second >= 60) {
		cout << "введите верное количество секунд";
		cin >> second;
	}
}


Time Time::operator-(const Time& obj)
{
	Time object;
	object.minute = minute - obj.minute;
	object.second = second - obj.second;
	return Time(object);
}

bool Time::operator==(const Time& obj)
{
	return (minute == obj.minute && second == obj.second);
}

bool Time::operator!=(const Time& obj)
{
	return (minute == obj.minute && second == obj.second);
}

void Time::show()
{
	if (minute < 0) {
		cout << "вы повели себ€ не хорошо, перезапустите программу";
	}
	cout << minute << ":" << second << endl;
}

Time::~Time() {}
