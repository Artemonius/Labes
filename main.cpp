#include <iostream>
#include <fstream>
#include "lab18.h"
#include <string>
#include <windows.h>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
using namespace std;
ostream& operator << (ostream& out, Time P1)
{
    return (out << P1.x << ":" << P1.y << endl);
}
istream& operator >> (istream& in, Time& P1)
{
    cout << "введите минуты\n";
    in >> P1.x;
    cout << "введите секунды\n";
    in >> P1.y;
    return in;
}
fstream& operator >> (fstream& fin, Time& P1)
{
    fin >> P1.x;
    fin >> P1.y;
    return fin;
}
fstream& operator<<(fstream& fout, Time P1)
{
    fout << P1.x << "\n" << P1.y << "\n";
    return fout;
}
void Ad1810()
{
    fstream stream("TestFile.txt", ios::in);
    fstream help("TestFile2.txt", ios::out);
    int K, L, c = 0;
    Time p;
    cout << "введите позицию нового элемента\n";
    cin >> K;
    cout << "введите количество новых элементов\n";
    cin >> L;
    while (c != K)
    {
        stream >> p;
        help << p;
        c++;
    }
    for (int i = 0; i < L; i++)
    {
        cin >> p;
        help << p;
    }
    while (stream >> p) help << p;
    stream.close();
    help.close();
    remove("TestFile.txt");
    rename("TestFile2.txt", "TestFile.txt");
}
void Show1810()
{
    fstream stream("TestFile.txt", ios::in);
    Time p;
    while (stream >> p)
    {
        cout << p;
    }
    stream.close();
}
void F1_1810()
{
    fstream stream("TestFile.txt", ios::in);
    fstream help("TestFile2.txt", ios::out);
    int K, L;
    Time p;
    cout << "введите минуты\n";
    cin >> K;
    cout << "введите секунды\n";
    cin >> L;
    while (stream >> p) if (p.x * 60 + p.y < K * 60 + L) help << p;
    stream.close();
    help.close();
    remove("TestFile.txt");
    rename("TestFile2.txt", "TestFile.txt");
}
void F2_1810()
{
    fstream stream("TestFile.txt", ios::in);
    fstream help("TestFile2.txt", ios::out);
    int K, L;
    Time p;
    cout << "введите минуты\n";
    cin >> K;
    cout << "введите секунды\n";
    cin >> L;
    while (stream >> p)
    {
        if (p.x == K && p.y == L)
        {
            Time t;
            t.x = 1;
            t.y = 30;
            p += t;
            help << p;
        }
        else help << p;
    }
    stream.close();
    help.close();
    remove("TestFile.txt");
    rename("TestFile2.txt", "TestFile.txt");
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (true)
    {
        int comand;
        cout << "Меню\n";
        cout << "1. добавить К записей после номера N\n";
        cout << "2. показать\n";
        cout << "3. удалить все записи больше заданного значения\n";
        cout << "4. увеличить все записи с заданным значением на 1:30\n";
        cout << "5. выход\n";
        cin >> comand;
        if (comand == 7) break;
        switch (comand)
        {
        case 1:
            Ad1810();
            break;
        case 2:
            Show1810();
            break;
        case 3:
            F1_1810();
            break;
        case 4:
            F2_1810();
            break;
        case 5:
            return 0;
        default:
            cout << "неизвестная команда\n";
        }
    }
}
