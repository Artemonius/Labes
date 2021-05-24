#include "lab18.h"
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
void Time::operator+=(Time t)
{
    int X = this->x + t.x;
    int Y = this->y + t.y;
    this->x = (X * 60 + Y) / 60;
    this->y = (X * 60 + Y) % 60;
}
bool Time::operator==(Time t)
{
    return this->x == t.x && this->y == t.y;
}

