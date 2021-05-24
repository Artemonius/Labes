#pragma once
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <fstream>
using namespace std;
class Time
{
public:
    int x;
    int y;
    Time()
    {
        x = 0;
        y = 0;
    }
    Time(int X, int Y)
    {
        x = (X * 60 + Y) / 60;
        y = (X * 60 + Y) % 60;
    }
    void operator+=(Time t);
    bool operator==(Time t);
};


