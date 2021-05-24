#pragma once
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <fstream>
using namespace std;
//собственные классы исключений
struct MyError
{
    virtual void what() = 0;
};
struct InvalidIndexError : public MyError
{
    string m_msg;
    InvalidIndexError() { m_msg = "Исключение: недопустимый индекс списка"; }
    void what() { cout << m_msg << endl; }
};
struct NoMatchSizes : public MyError
{
    string m_msg;
    NoMatchSizes() { m_msg = "Исключение: разные размеры списков"; }
    void what() { cout << m_msg << endl; }
};
struct ClassVector
{
    ClassVector(int s, int el)
    {
        if (s <= 0) throw 1;
        for (int i = 0; i < s; i++) m_vector.push_back(el);
    }
    ~ClassVector() {}
    vector <int> m_vector;
    int operator[](int i);
    int operator()();
    ClassVector operator*(ClassVector add_vector);
    void Show();
    void Change(int index, int el)
    {
        auto it = m_vector.begin();
        advance(it, index);
        *it = el;
    }
};


