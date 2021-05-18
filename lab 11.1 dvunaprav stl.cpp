#include <iostream>
#include <iterator>
#include <list>
using namespace std;

list <int> point;

void make_point(int n)
{
    int b;
    for (int i = 0; i < n - 1; i++)
    {
        b = rand() % 50;
        point.push_back(b);
    }
}

int main()
{
    system("chcp 1251>nul");
    cout << "Введите количество элементов списка: " << endl;
    int n;
    cin >> n;
    n++;
    while (n < 2) // Защита от ввода неверных данных
    {
        cout << "Список не существует. Введите количество элементов списка больше 1: ";
        cin >> n;
    }
    make_point(n);
    copy(point.begin(), point.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    int num = 0;
    list <int>::iterator iter;
    list <int> addpoint;
    for (iter = point.begin(); iter != point.end(); iter++)
    {
        if (*iter % 2 != 0)
        {
            addpoint.push_back(*iter);
        }
    }
    point.clear();
    point.insert(iter, addpoint.begin(), addpoint.end());
    copy(point.begin(), point.end(), ostream_iterator<int>(cout, " "));
    return 0;
}
