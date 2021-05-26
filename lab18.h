#pragma once
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <fstream>
using namespace std;
struct MyError
{
    virtual void what() = 0;
};
struct InvalidIndexError : public MyError
{
    string m_msg;
    InvalidIndexError() { m_msg = "Exception: invalid list index"; }
    void what() { cout << m_msg << endl; }
};
struct NoMatchSizes : public MyError
{
    string m_msg;
    NoMatchSizes() { m_msg = "Exception: sizes of lists are different"; }
    void what() { cout << m_msg << endl; }
};
class Object8
{
public:
    string name;
    virtual void Show() = 0;
    virtual void Read() = 0;
};
class Print : public Object8
{
public:
    string author;
    Print() {}
    Print(string Name, string Author)
    {
        name = Name;
        author = Author;
    }
    void Show();
    void Read();
};
class Magazin : public Print
{
public:
    int sheet;
    Magazin() {}
    Magazin(string Name, string Author, int Sheet) :Print(Name, Author)
    {
        sheet = Sheet;
    }
    void Show();
    void Read();
};
struct Vector8
{
    vector <Object8*> data;
    int m_size;
    int cur;
    void Add();
    void Dell();
    void Show();
    void ShowName();
    int operator()();
    Vector8() { m_size = 0; }
};
struct TEvent
{
    int what;
    union
    {
        int command;
        struct
        {
            int message;
            int a;
        };
    };
};
struct Dialog : Vector8
{
    int EndState;
    int Valid();
    void EndExec();
    int Execute();
    void GetEvent(TEvent& event);
    void HandleEvent(TEvent& event);
    void ClearEvent(TEvent& event);
    Dialog() { EndState = 0; }
};

