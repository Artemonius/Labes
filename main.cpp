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
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int s, el, ind, s2, el2;
    try
    {
        cout << "Введите длину списка 1\n";
        cin >> s;
        cout << "Введите элемент, которым будет заполнен список 1\n";
        cin >> el;
        cout << "Введите длину списка 2\n";
        cin >> s2;
        cout << "Введите элемент, которым будет заполнен список 2\n";
        cin >> el2;
        ClassVector VECTOR(s, el);
        ClassVector VECTOR2(s2, el2);
        VECTOR.Show();
        VECTOR2.Show();
        cout << "Введите номер элемента\n";
        cin >> ind;
        cout << "VECTOR[" << ind << "]=" << VECTOR[ind] << endl;
        cout << "VECTOR2[" << ind << "]=" << VECTOR2[ind] << endl;
        ClassVector VECTOR3(VECTOR * VECTOR2);
        cout << "VECTOR3=VECTOR1*VECTOR2\n";
        VECTOR3.Show();
    }
    catch (int) { cout << "Исключение: ошибка с недопустимым размером списка int\n"; }
    catch (MyError& e) { e.what(); }
    catch (...) { cout << "Неизвестное исключение...\n"; }
}
